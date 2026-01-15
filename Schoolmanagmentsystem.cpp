#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string name[50];
    int roll[50];
    int s_count = 0;
    int p_count[50] = {0};
    int a_count[50] = {0};
    string t_name[50];
    int ID[50];
    string subject[50];
    int t_count = 0;
    int marks[50][50] = {0};

    do
    {
        cout << "\nSCHOOL MANAGEMENT SYSTEM" << endl;
        cout << "MAIN MENU" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Mark Attendance" << endl;
        cout << "4. View Attendance" << endl;
        cout << "5. Add Teacher / Subject" << endl;
        cout << "6. View Teachers / Subjects" << endl;
        cout << "7. Enter Marks" << endl;
        cout << "8. View Marks" << endl;
        cout << "9. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            cout << "Enter Student Name: ";
            getline(cin, name[s_count]);

            cout << "Enter Roll Number: ";
            cin >> roll[s_count];
            cin.ignore();

            s_count++;
        }
        else if (choice == 2) 
        {
            if (s_count == 0)
                cout << "No students available!" << endl;
            else
            {
                cout << "\nRoll\tName\tPresents\tAbsents\n";

                for (int i = 0; i < s_count; i++)
                    cout << roll[i] << "\t" << name[i] << "\t" << p_count[i] << "\t" << a_count[i] << endl;
            }
        }
        else if (choice == 3) 
        {
            if (s_count == 0)
                cout << "No students to mark attendance!" << endl;
            else
            {
                char att;
                for (int i = 0; i < s_count; i++)
                {
                    cout << roll[i] << ". " << name[i] << " (P/A)? ";
                    cin >> att;
                    if (att == 'a' || att == 'A')
                        a_count[i]++;
                    else if (att == 'p' || att == 'P')
                        p_count[i]++;
                }
            }
        }
        else if (choice == 5) 
        {
            ofstream file2("teacher.txt");

            if (t_count == 0)
                file2 << "ID\tTeacher Name\tSubject\n"; 

            cout << "Enter Teacher Name: ";
            getline(cin, t_name[t_count]);

            cout << "Enter Teacher ID: ";
            cin >> ID[t_count];
            cin.ignore();

            cout << "Enter Subject: ";
            getline(cin, subject[t_count]);

            file2 << ID[t_count] << "\t" << t_name[t_count] << "\t" << subject[t_count] << "\n";

            t_count++;

            file2.close();
        }
        else if (choice == 6) 
        {
            if (t_count == 0)
                cout << "No teachers available!" << endl;
            else
            {
                cout << "\nID\tTeacher Name\tSubject\n";

                for (int i = 0; i < t_count; i++){
                    cout << ID[i] << "\t" << t_name[i] << "\t" << subject[i] << endl;
                }
            }
        }
        else if (choice == 7) 
        {
            if (s_count == 0 || t_count == 0)
            {
                cout << "Add students and teachers first!" << endl;
            }
            else
            {
                for (int j = 0; j < t_count; j++)
                {
                    cout << "\nEnter marks for subject: " << subject[j] << endl;
                    for (int i = 0; i < s_count; i++)
                    {
                        cout << "Enter marks for " << name[i] << " (Roll " << roll[i] << "): ";
                        cin >> marks[i][j];
                    }
                }

                
                ofstream file1("student.txt");

                file1 << "Roll\tName\tPresents\tAbsents";

                for (int j = 0; j < t_count; j++){
                    file1 << "\t" << subject[j];
                }

                file1 << "\n";

                for (int i = 0; i < s_count; i++)
                {
                    file1 << roll[i] << "\t" << name[i] << "\t" << p_count[i] << "\t" << a_count[i];

                    for (int j = 0; j < t_count; j++){
                        file1 << "\t" << marks[i][j];
                    }
                    file1 << "\n";
                }
                file1.close();
            }
        }
        else if (choice == 8) 
        {
            if (s_count == 0 || t_count == 0)
                cout << "No students or subjects available!" << endl;
            else
            {
                cout << "Roll\tName\tPresents\tAbsents";
                
                for (int j = 0; j < t_count; j++)
                    cout << "\t" << subject[j];
                cout << "\n";

                for (int i = 0; i < s_count; i++)
                {
                    cout << roll[i] << "\t" << name[i] << "\t" << p_count[i] << "\t" << a_count[i];
                    for (int j = 0; j < t_count; j++)
                        cout << "\t" << marks[i][j];
                    cout << "\n";
                }
            }
        }
        else if (choice == 9)
            cout << "Exiting program..." << endl;
        else
            cout << "Invalid choice! Enter a number between 1 and 9." << endl;

    } while (choice != 9);

    return 0;
}
