#include <iostream>
using namespace std;
int main()
{

    char start_value;
    char select_again;
    float converter(void);
start:
    cout << "------------Welcome to Currency Converter Application------------" << endl;
    cout << "------------Please follow the instructions------------" << endl;
    cout << "You can have currencies dollar, rupees, euro, pound" << endl;
    cout << "You can type a, b, c, d respectively for currencies dollar, rupees, euro, pound" << endl;
    cout << "Enter currency1 which you want to convert" << endl;
    cout << "Enter value for currency1" << endl;
    cout << "Enter currency2 in which you want want to convert currency1" << endl;
    cout << "(a) Dollar (b) Rupees (c) Euro (d) Pound" << endl;
    cout << "Please press s to start" << endl;
select_choice:
    cin >> start_value;

    if (start_value == 's' || start_value == 'S')
    {
        float final_value = converter();
        cout << "Result is " << final_value << endl;
        cout << "Do you want to use the application again? y or n" << endl;
    typeagain:
        cin >> select_again;
        if (select_again == 'Y' || select_again == 'y')
        {
            goto start;
        }
        else if (select_again == 'n' || select_again == 'N')
        {
            cout << "Thankyou for using our application!" << endl;
        }
        else
        {
            cout << "You have entered wrong value. Please type again" << endl;
            goto typeagain;
        }
    }
    else
    {
        cout << "You have entered wrong value. Please type s" << endl;
        goto select_choice;
    }
}
float converter()
{

    char curr_name1;
    char curr_name2;
    float currency1;
    float currency2;

currlevel:

    cout << "Enter currency1 name" << endl;
    cin >> curr_name1;

    cout << "Enter currency1 Value" << endl;
    cin >> currency1;

    switch (curr_name1)
    {
    case 'a':
    currlevel1:
        cout << "Enter currency2 name" << endl;
        cin >> curr_name2;

        if (curr_name2 == 'a' || curr_name2 == 'A')
        {
            currency2 = currency1 * 1;
        }
        else if (curr_name2 == 'b' || curr_name2 == 'B')
        {
            currency2 = currency1 * 73.84;
        }
        else if (curr_name2 == 'c' || curr_name2 == 'C')
        {
            currency2 = currency1 * 0.85;
        }
        else if (curr_name2 == 'd' || curr_name2 == 'D')
        {
            currency2 = currency1 * 0.72;
        }
        else
        {
            cout << "You have entered wrong value. Type again!" << endl;
            goto currlevel1;
        }
        break;
    case 'b':
    currlevel2:
        cout << "Enter currency2 name" << endl;
        cin >> curr_name2;

        if (curr_name2 == 'a' || curr_name2 == 'A')
        {
            currency2 = currency1 * 0.01;
        }
        else if (curr_name2 == 'b' || curr_name2 == 'B')
        {
            currency2 = currency1 * 1;
        }
        else if (curr_name2 == 'c' || curr_name2 == 'C')
        {
            currency2 = currency1 * 0.01;
        }
        else if (curr_name2 == 'd' || curr_name2 == 'D')
        {
            currency2 = currency1 * 0.009;
        }
        else
        {
            cout << "You have entered wrong value. Type again!" << endl;
            goto currlevel2;
        }
        break;
    case 'c':
    currlevel3:
        cout << "Enter currency2 name" << endl;
        cin >> curr_name2;

        if (curr_name2 == 'a' || curr_name2 == 'A')
        {
            currency2 = currency1 * 1.16;
        }
        else if (curr_name2 == 'b' || curr_name2 == 'B')
        {
            currency2 = currency1 * 86.37;
        }
        else if (curr_name2 == 'c' || curr_name2 == 'C')
        {
            currency2 = currency1 * 1;
        }
        else if (curr_name2 == 'd' || curr_name2 == 'D')
        {
            currency2 = currency1 * 0.85;
        }
        else
        {
            cout << "You have entered wrong value. Type again!" << endl;
            goto currlevel3;
        }
        break;
    case 'd':
    currlevel4:
        cout << "Enter currency2 name" << endl;
        cin >> curr_name2;

        if (curr_name2 == 'a' || curr_name2 == 'A')
        {
            currency2 = currency1 * 1.37;
        }
        else if (curr_name2 == 'b' || curr_name2 == 'B')
        {
            currency2 = currency1 * 101.20;
        }
        else if (curr_name2 == 'c' || curr_name2 == 'C')
        {
            currency2 = currency1 * 1.17;
        }
        else if (curr_name2 == 'd' || curr_name2 == 'D')
        {
            currency2 = currency1 * 1;
        }
        else
        {
            cout << "You have entered wrong value. Type again!" << endl;
            goto currlevel4;
        }
        break;
    default:
    {
        cout << "You have entered wrong value. Type again!" << endl;
        goto currlevel;
    }
    }
    return currency2;
}