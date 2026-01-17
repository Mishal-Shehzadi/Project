#include <iostream>
using namespace std;
int main()
{
    char value;
    char again;

start:

    cout << "---------------WELCOME TO OUR CALCULATOR APPLICATION---------------" << endl;
    cout << "-------------------Please follow the instrcutions------------------" << endl;
    cout << "(1) Please press a for addition" << endl;
    cout << "(2) Please press s for subtraction" << endl;
    cout << "(3) Please press m for multiplication" << endl;
    cout << "(4) Please press d for division" << endl;
    cout << "(5) Please press o for module" << endl;

    int addition(void);
    int multiplication(void);
    int subtraction(void);
    int division(void);
    int module(void);

    cin >> value;

    if (value == 'a' || value == 'A')
    {
        int add_value = addition();
        cout << "Addition is " << add_value << endl;
        cout << "Do you want to use our application again? y or n" << endl;

    add_again:

        cin >> again;

        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "Thankyou for using our applicatiion!" << endl;
        }
        else
        {
            cout << "You have enetered wrong choice :( please select y or n" << endl;
            goto add_again;
        }
    }
    else if (value == 'm' || value == 'M')
    {
        int multiply_value = multiplication();
        cout << "Product is " << multiply_value << endl;
        cout << "Do you want to use our application again? y or n" << endl;

    mul_again:

        cin >> again;

        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "Thankyou for using our applicatiion!" << endl;
        }
        else
        {
            cout << "You have enetered wrong choice :( please select y or n" << endl;
            goto mul_again;
        }
    }
    else if (value == 's' || value == 'S')
    {
        int subtract_value = subtraction();
        cout << "Subtraction is " << subtract_value << endl;
        cout << "Do you want to use our application again? y or n" << endl;

    sub_again:

        cin >> again;

        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "Thankyou for using our applicatiion!" << endl;
        }
        else
        {
            cout << "You have enetered wrong choice :( please select y or n" << endl;
            goto sub_again;
        }
    }
    else if (value == 'd' || value == 'D')
    {
        int div_value = division();
        cout << "Division is " << div_value << endl;
        cout << "Do you want to use our application again? y or n" << endl;

    div_again:

        cin >> again;

        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "Thankyou for using our applicatiion!" << endl;
        }
        else
        {
            cout << "You have enetered wrong choice :( please select y or n" << endl;
            goto div_again;
        }
    }
    else if (value == 'o' || value == 'O')
    {
        int mod_value = module();
        cout << "Module is " << mod_value << endl;
        cout << "Do you want to use our application again? y or n" << endl;

    mod_again:

        cin >> again;

        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "Thankyou for using our applicatiion!" << endl;
        }
        else
        {
            cout << "You have enetered wrong choice :( please select y or n" << endl;
            goto mod_again;
        }
    }
    else
    {
        cout << "You have enetered wrong choice :( please eneter again!" << endl;
        goto start;
    }
}

int addition()
{
    int a;
    int total = 0;
    char choice;

add:

    cout << "Enter a number" << endl;
    cin >> a;
    total += a;

    cout << "Do you want to add more numbers? y or n?" << endl;
add_again:
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        goto add;
    }
    else if (choice == 'n' || choice == 'N')
    {
        return total;
    }
    else
    {
        cout << "You have enetred wrong choice, please select y or n" << endl;
        goto add_again;
    }
    return total;
}

int multiplication()
{
    int a;
    int total = 1;
    char choice;

multiply:

    cout << "Enter a number" << endl;
    cin >> a;
    total *= a;

    cout << "Do you want to multiply more numbers? y or n?" << endl;
multiply_again:
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        goto multiply;
    }
    else if (choice == 'n' || choice == 'N')
    {
        return total;
    }
    else
    {
        cout << "You have enetred wrong choice, please select y or n" << endl;
        goto multiply_again;
    }
    return total;
}
int subtraction()
{
    int a, b;
    int total;
    char choice;

subtract:

    cout << "Enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a - b;
    }
    else
    {
        total = b - a;
    }

    return total;
}
int division()
{
    int a, b;
    int total;
    char choice;

divide:

    cout << "Enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a / b;
    }
    else
    {
        total = b / a;
    }

    return total;
}
int module()
{
    int a, b;
    int total;
    char choice;

mod:

    cout << "Enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a % b;
    }
    else
    {
        total = b % a;
    }

    return total;
}