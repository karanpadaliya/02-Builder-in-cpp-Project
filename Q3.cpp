#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
private:
    string A;
    string B;
    int64_t number;
    int64_t Phone;
    string Email;
    int get;
    string adn;
    int64_t adc;
    int adp;

public:
    void display()
    {
        cout << "---------------------------------------------------------------" << endl;
        cout << "-: Press A to Log in as Administrator Or S to Log in as STAFF :-" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cin >> A;
        if (A == "a" || A == "A")
        {
            display2();
        }
        else if (A == "s" || A == "S")
        {
            display3();
            get3();
        }
        else
        {
            cout << "\tWrong INPUT Please Try Again..";
        }
    }
    void display2()
    {
        cout << "\t-------------------------------------------" << endl;
        cout << "\t\t-:Welcome as Administrator:-" << endl;
        cout << "\t-------------------------------------------" << endl;
        cin.ignore();
        cout << "Enter The Name Of Administrator\t\t:";
        getline(cin, adn);
        cout << "Enter The Phone Number Of Administrator\t:";
        cin >> adc;

        cout << "Enter the PIN of Administrator\t\t :";
        cin >> adp;
        if (adp == 1234)
        {
            get2();
        }
        else
        {
            cout << "\n\tWrong PIN Please Try Again..";
        }
    }
    void get2()
    {

        cout << "\n-------------------------------------------" << endl;
        cout << "\t\tYou are the Manager..." << endl;
        cout << "Name         :" << adn << endl;
        cout << "Phone No     :" << adc << endl;
        cout << "-------------------------------------------\n" << endl
             << endl;

        cout << "Press [1] to Deposite the money:" << endl
             << endl;
        cout << "Press [2] to Transfer the money:" << endl
             << endl;
        cout << "Press [3] to Withdraw the money:" << endl
             << endl;
        cin >> get;
        if (get == 1)
        {
            int wm;
            int am = 10000;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Deposite the money :";
            cin >> wm;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "\tYour Actual Amount Is :" << am << endl<<endl;
            cout << "\tCongrates Your Amount Has Deposite Successfully." << endl<<endl;
            cout << "\tYour Account Balance Is :" << am + wm << endl<<endl;
        }
        else if (get == 2)
        {
            int64_t hv;
            int pv;
            int64_t wm;
            int am = 10000;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Enter the Account Number Or Phone Number To Transfer The Money :";
            cin >> hv;
            cout << "     Enter Your Personal 4 Digit-PIN :";
            cin >> pv;
            if (pv == 1234)
            {
                cout << "     Transfer the money :";
                cin >> wm;
                cout << "--------------------------------------------------------------------------------------" << endl;
                cout << "     Transfer Account Number Or Phone Number Is:" << hv << endl;
                cout << "     Your Actual Amount Is :" << am << endl;
                cout << "     congrates Your Amount Has Transfer Successfully." << endl;
                cout << "     Your Account Balance Is :" << am - wm << endl;
            }
            else
            {
                cout << "     Wrong PIN Please Try Again.." << endl;
            }
        }
        else if (get == 3)
        {
            int wm;
            int am = 10000;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Withdraw the money :";
            cin >> wm;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Your Actual Amount Is :" << am << endl;
            cout << "     congrates Your Amount Has Withdraw Successfully." << endl;
            cout << "     Your Account Balance Is :" << am - wm << endl;
        }
        else
        {
            cout << "        Wrong INPUT Please Try Again..";
        }
    }
    void display3()
    {
        cin.ignore();
        cout << "\n-------------------------------------------" << endl;
        cout << "\t\t-:Welcome as STAFF:-" << endl;
        cout << "-------------------------------------------\n" << endl;
        cout << "Enter The Name Of Staff\t\t\t: ";
        getline(cin, B);
        cout << "Enter The Account Number Of Staff\t: ";
        cin >> number;
        cout << "Enter The Phone Number Of Staff\t\t: ";
        cin >> Phone;
        cout << "Enter The E-mail of Staff\t\t: ";
        cin >> Email;
    }
    void get3()
    {
        cout << "\n-------------------------------------------" << endl;
        cout << "Name\t\t:" << B << endl;
        cout << "Account No\t:" << number << endl;
        cout << "Phone No\t:" << Phone << endl;
        cout << "E-mail\t\t:" << Email << endl;
        cout << "-------------------------------------------" << endl
             << endl;

        cout << "Press [1] to Deposite the money:" << endl
             << endl;
        cout << "Press [2] to Transfer the money:" << endl
             << endl;
        cout << "Press [3] to Withdraw the money:" << endl
             << endl;
        cin >> get;
        if (get == 1)
        {
            int wm;
            int am = 10000;
            cout << "\n-------------------------------------------" << endl;
            cout << "     Deposite the money :";
            cin >> wm;
            cout << "---------------------------------------------" << endl;
            cout << "\tYour Actual Amount Is :" << am << endl;
            cout << "\tCongrates Your Amount Has Deposite Successfully." << endl;
            cout << "\tYour Account Balance Is :" << am + wm << endl;
        }
        else if (get == 2)
        {
            int64_t hv;
            int pv;
            int64_t wm;
            int am = 10000;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "\tEnter the Account Number Or Phone Number To Transfer The Money :";
            cin >> hv;
            cout << "\tEnter Your Personal 4 Digit-PIN :";
            cin >> pv;
            if (pv == 1234)
            {
                cout << "\tTransfer the money :";
                cin >> wm;
                cout << "--------------------------------------------------------------------------------------" << endl;
                cout << "\tTransfer Account Number Or Phone Number Is:" << hv << endl;
                cout << "\tYour Actual Amount Is :" << am << endl;
                cout << "\tCongrates Your Amount Has Transfer Successfully." << endl;
                cout << "\tYour Account Balance Is :" << am - wm << endl;
            }
            else
            {
                cout << "\tWrong PIN Please Try Again.." << endl;
            }
        }
        else if (get == 3)
        {
            int wm;
            int am = 10000;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Withdraw the money :";
            cin >> wm;
            cout << "--------------------------------------------------------------------------------------" << endl;
            cout << "     Your Actual Amount Is :" << am << endl;
            cout << "     congrates Your Amount Has Withdraw Successfully." << endl;
            cout << "     Your Account Balance Is :" << am - wm << endl;
        }
        else
        {
            cout << "        Wrong INPUT Please Try Again..";
        }
    }
};
int main()
{
    Bank B;
    string check;
    cout << "\n\n\t\t-: BANK MANAGMENT SYSTEM :-" << endl;
    cout << "\t---------------------------------------------\n" << endl;
    cout << "\t\t-: Desingned N Programed By :-" << endl;
    cout << "\t---------------------------------------------" << endl;
    cout << "\t\t      Karan D Padaliya\n" << endl;
    cout << "\t\t\t-: Trainer :-" << endl;
    cout << "\t---------------------------------------------" << endl;
    cout << "\t\t\t PANKAJ SIR\n"<< endl;
    cout << "\t     Press Any Key N Enter to Continue..." << endl;
    getline(cin, check);
    if (check >= "a" && check <= "z" || check >= "A" && check <= "Z")
    {
        B.display();
    }
    else
    {
        cout << "Wrong Input Please Enter The Alphabet Key.." << endl;
    }
    return 0;
}