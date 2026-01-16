#include <iostream>
using namespace std;
int main()
{
    int return_total_bill(void);
    int total_amount = return_total_bill();

    cout << "Your total bill amount is " << total_amount << endl;
    cout << "Thankyou for your order" << endl;
}
int return_total_bill()
{
    char c;
    char item;
    char veg_item;
    char non_veg_item;
    int bill_amount = 0;
    char select_again;

    cout << "--------------WELCOME TO ONLINE FOOD ORDER--------------" << endl;
    cout << "----------------Follow below instructions----------------" << endl;
    cout << "Step 01: Please press s to start your order." << endl;
    cout << "Step 02: You can order both veg and non-veg items." << endl;
    cout << "Step 03: Please press a to select veg items." << endl;
    cout << "Step 04: Please press b to select non-veg items." << endl;
    cout << "Step 05: You will get your final bill after your order." << endl;
start:
    cin >> c;

    if (c == 's' || c == 'S')
    {
    items:
        cout << "Please select your choice" << endl;
        cout << "(a) Veg Items     (b) Non Veg Items" << endl;
        cin >> item;

        if (item == 'a' || item == 'A')
        {
        veg_item_list:
            cout << "PLease select 1, 2, 3, 4, 5 as per your choice" << endl;
            cout << "1. Paneer : Price = Rs. 250" << endl;
            cout << "2. Burger : Price = Rs. 50" << endl;
            cout << "3. Pizza : Price = Rs. 100" << endl;
            cout << "4. Pasta : Price = Rs. 150" << endl;
            cout << "5. veg Roll : Price = Rs. 100" << endl;

            cin >> veg_item;

            if (veg_item == '1')
            {
                bill_amount += 250;
            }
            else if (veg_item == '2')
            {
                bill_amount += 50;
            }
            else if (veg_item == '3')
            {
                bill_amount += 100;
            }
            else if (veg_item == '4')
            {
                bill_amount += 150;
            }
            else if (veg_item == '5')
            {
                bill_amount += 100;
            }
            else
            {
                cout << "You have entered wrong character. try again!" << endl;
                goto veg_item_list;
            }

            cout << "Do you want to enter more items? y or n" << endl;
            cin >> select_again;

            if (select_again == 'y' || select_again == 'Y')
            {
                goto items;
            }
            else
            {
                return bill_amount;
            }
        }
        else if (item == 'b' || item == 'B')
        {
        non_veg_item_list:
            cout << "PLease select 1, 2, 3, 4, 5 as per your choice" << endl;
            cout << "1. Chiken : Price = Rs. 350" << endl;
            cout << "2. Burger : Price = Rs. 100" << endl;
            cout << "3. Pizza : Price = Rs. 150" << endl;
            cout << "4. Pasta : Price = Rs. 200" << endl;
            cout << "5. Non veg Roll : Price = Rs. 200" << endl;

            cin >> non_veg_item;

            if (non_veg_item == '1')
            {
                bill_amount += 350;
            }
            else if (non_veg_item == '2')
            {
                bill_amount += 100;
            }
            else if (non_veg_item == '3')
            {
                bill_amount += 150;
            }
            else if (non_veg_item == '4')
            {
                bill_amount += 200;
            }
            else if (non_veg_item == '5')
            {
                bill_amount += 200;
            }
            else
            {
                cout << "You have entered wrong character. try again!" << endl;
                goto non_veg_item_list;
            }

            cout << "Do you want to enter more items? y or n" << endl;
            cin >> select_again;

            if (select_again == 'y' || select_again == 'Y')
            {
                goto items;
            }
            else
            {
                return bill_amount;
            }
        }
        else
        {
            cout << "You have entered wrong character, try again!" << endl;
            goto items;
        }
    }
    else
    {
        cout << "You have entered wrong character, please press s to continue." << endl;
        goto start;
    }
    return bill_amount;
}