// 1. WAP to make Railway Reservation System.
// Requirements:
// (A) User Input Train Number , Train Name , Source , Destination , Train Time.
// (B) Display Record By Search Train Number.
// (C) Minimum 3 Input Train Record.

#include <iostream>
#include <string>
using namespace std;
class Train
{
public:
    int Train_number;
    char Train_name[20], Train_source[20], Train_destination[20], Train_time[5];
    string name;

    // int no;
    // string name;
    void enterTrainData()
    {
        cout << "\n------------------------------------------------------" << endl;
        cout << "Enter Train No: ";
        cin >> Train_number;
        cout << "Enter Train Name: ";
        cin >> Train_name;
        cin.ignore();
        getline(cin, name);
        cout << "Enter Train Time: ";
        cin >> Train_time;
        cout << "Enter Train Source: ";
        cin >> Train_source;
        cout << "Enter Train Destination: ";
        cin >> Train_destination;
        cout << "------------------------------------------------------\n" << endl;
    }
    void getTrainData()
    {
        cout << "\n\t\tDetails of this Train No: " << Train_number << " is " << endl;
        cout << "\t------------------------------------------------------" << endl;
        cout << "Train No: " << Train_number << endl
             << "Train Name: " << Train_name << endl
             << "Train Time: " << Train_time << endl
             << "Train Source: " << Train_source << endl
             << "Train Destination: " << Train_destination << endl;
    }
};
int main()
{
    Train t[3];
    int choice;
    int Train_number;

    do
    {
        cout << "\n\t-: Welcome to the Railway Reservation System :-\n";
        cout << "\t-----------------------------------------------\n";
        cout << "Enter 1 - Add Train" << endl;
        cout << "Enter 2 - Search Train" << endl;
        cout << "Enter 3 - Exit" << endl;
        cout << "Press (1/2/3): ";
        cin >> choice;

        if (choice == 1)
        {
            // t[0].enterTrainData();
            for (int i = 0; i < 3; i++)
            {
                t[i].enterTrainData();
            }
        }
        else if (choice == 2)
        {
            cout << "Search Train No: ";
            cin >> Train_number;

            for (int i = 0; i < 3; i++)
            {
                if (Train_number == t[i].Train_number)
                {
                    t[i].getTrainData();
                }
            }
        }
        else if (choice >= 3)
        {
            cout << "\nExit...." << endl;
        }

    } while (choice < 3 && choice > 0);
    return 0;
}