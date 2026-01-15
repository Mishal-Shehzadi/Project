#include <iostream>

using namespace std;
int main()
{
    int final_result = 0;
    char play_again;
    int playQuiz(void);
play:
    final_result = playQuiz();
    cout << "Your Total Score is " << final_result << endl;

    if (final_result >= 6)
    {
        cout << "You are Pass!" << endl;
        cout << "Do you want to play again? y or n?" << endl;
        cin >> play_again;

        if (play_again == 'y' || play_again == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "Thnakyou for playing Quiz..." << endl;
        }
    }
    else
    {
        cout << "You are fail :(" << endl;

        cout << "Do you want to retry? y or n?" << endl;
        cin >> play_again;

        if (play_again == 'y' || play_again == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "Thnakyou for playing Quiz..." << endl;
        }
    }
}

int playQuiz()
{
    char c;
    char option;
    int score = 0;

playInsideFunction:

    cout << "-----------------WELCOME TO QUIZ GAME-----------------" << endl;
    cout << "-----------Please follow the instructions-------------" << endl;
    cout << "Step 01: Quiz contains total 10 questions" << endl;
    cout << "Step 02: You will be given 01 marks for each right answer" << endl;
    cout << "Step 03: There will be no negatuve marking" << endl;
    cout << "Step 04: Please press s to start the quiz" << endl;
    cout << "Step 05: Please select option a, b, c or d." << endl;
    cout << "Step 06: If your Score is greater than or equal to 6, you will pass the quiz." << endl;
    cin >> c;

    if (c == 's' || c == 'S')
    {
        cout << "Q1. What is the capital of Pakistan?" << endl;
        cout << "(a) Islamabad (b) Peshawar (c) Karachi (d) Multan" << endl;

        cin >> option;

        if (option == 'a' || option == 'A')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q2. Who is the prime minister of Pakistan?" << endl;
        cout << "(a) Imran Khan (b) Muhammad Ali Jinnah (c) Shehbaaz Shareef (d) Bhutto" << endl;

        cin >> option;

        if (option == 'c' || option == 'C')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q3. What is the natioanl Bird of Pakistan?" << endl;
        cout << "(a) Eagle  (b) Peacock (c) Hen (d) Chakor" << endl;

        cin >> option;

        if (option == 'd' || option == 'D')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q4. What is the natioanl Animal of Pakistan?" << endl;
        cout << "(a) Markhor (b) Tiger (c) Lion (d) Zebra" << endl;

        cin >> option;

        if (option == 'a' || option == 'A')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q5. What is the national flower of Pakistan?" << endl;
        cout << "(a) Rose (b) Jasemine (c) Lotus (d) Sunflower" << endl;

        cin >> option;

        if (option == 'b' || option == 'B')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q6 Who is the chief Minister of Punjab?" << endl;
        cout << "(a) Mariyum Nawaz (b) Bilawal (c) Imran Khan (d) Iqbal" << endl;

        cin >> option;

        if (option == 'a' || option == 'A')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q7. Who is the founder of Pakistan?" << endl;
        cout << "(a)Jinnah (b) Sir Syed (c) Iqbal (d) Hafeez Jalandhari" << endl;

        cin >> option;

        if (option == 'a' || option == 'A')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q8. When did Pakistan come into being?" << endl;
        cout << "(a) August 1987 (b) August 1935 (c) August 1947 (d) August 2000" << endl;

        cin >> option;

        if (option == 'c' || option == 'C')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q9. How many Provinces are there in Pakistan?" << endl;
        cout << "(a) 5 (b) 3 (c) 2 (d) 11" << endl;

        cin >> option;

        if (option == 'a' || option == 'A')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q10. How many days are there in the month of December?" << endl;
        cout << "(a) 30 (b) 31 (c) 32 (d) 28" << endl;

        cin >> option;

        if (option == 'b' || option == 'B')
        {
            score++;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout << "You have entered wrong character, please eneter s" << endl;
        goto playInsideFunction;
    }
    return score;
}