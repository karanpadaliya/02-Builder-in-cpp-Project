// 2. WAP to make Supermarket Billing System.
// Requirements:
// (A) Verify User Id And Password
// (B) User Input Item Number , Item Name , Quantity , Price , Discount.

#include <iostream>
#include <string>
using namespace std;

class Useradd
{
    // (B) User Input Item Number , Item Name , Quantity , Price , Discount.
public:
    int Item_Number, Item_Quantity, Item_Price, Item_Discount;
    string Item_name;

    void getUserInput()
    {
        cout << "\n------------------------------\n";
        cout << "Item Number\t: ";
        cin >> Item_Number;
        cout << "Item Name\t: ";
        cin.ignore();
        getline(cin, Item_name);
        cout << "Quantity\t: ";
        cin >> Item_Quantity;
        cout << "Price\t\t: ";
        cin >> Item_Price;
        cout << "Discount\t: ";
        cin >> Item_Discount;
        cout << "--------------------------------\n";
    }
    void displayUserInput()
    {
        cout << "\n------------------------------\n";
        cout << "\n\tITEM DETAILS \n";
        cout << "\n------------------------------\n";
        cout << "Item Number\t: " << Item_Number << endl;
        cout << "Name\t\t: " << Item_name << endl;
        cout << "Quantity\t: " << Item_Quantity << endl;
        cout << "Price\t\t: Rs." << Item_Price << endl;
        cout << "Discount\t: " << Item_Discount << "%\n";
        cout << "--------------------------------\n";
    }
} userAddItem;
int main()
{
// (A) Verify User Id And Password
    string Username = "Admin";
    string Password = "Admin";
    string inputUsername, inputPassword;
    int choice;
    Useradd t[3];
    int Item_Number;

    cout << "\n\t\t-:Supermarket Billing System:-" << endl;
    cout << "\t-----------------------------------------------\n"
         << endl;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;
    if (inputUsername == Username && inputPassword == Password)
    {
        cout << "\nLogin successful!! Welcome, " << Username << endl;
        do
        {
            cout << "\nEnter 1 - Add Item" << endl;
            cout << "Enter 2 - Search Item" << endl;
            cout << "Enter 3 - Exit" << endl;
            cout << "Press (1/2/3): ";
            cin >> choice;

            if (choice == 1)
            {
                for (int i = 0; i < 3; i++)
                {
                    t[i].getUserInput();
                }
            }
            else if (choice == 2)
            {
                cout << "\n\nSearch Item: ";
                cin >> Item_Number;

                for (int i = 0; i < 3; i++)
                {
                    if (Item_Number == t[i].Item_Number)
                    {
                        t[i].displayUserInput();
                    }
                }
            }
            else if (choice == 3)
            {
                cout << "\nThank You.. Visit Again....." << endl;
            }
            else if (choice > 3)
            {
                cout << "\nWrong Input....Try After SomeTime..." << endl;
            }
        } while (choice < 3 && choice > 0);
    }
    else{
        cout << "\nInvalid UserID or Password... Try Again..."<<endl;
    }
    return 0;
}