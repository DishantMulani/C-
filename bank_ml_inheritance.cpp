#include <iostream>
#include <string.h>
using namespace std;
class bank
{
protected:
    char ac[15];
    char nm[50];

private:
    int l;
    char act[10];

public:
    void edetails()
    {
    x:
        cout << "\nEnter 7 Digits Account Number : ";
        fflush(stdin);
        cin.getline(ac, 15);
        l = strlen(ac);
        if (l == 7)
        {
        }
        else
        {
            cout << "\ninvalid Account Number!!!!";
            goto x;
        }
        cout << "Enter Name : ";
        cin.getline(nm, 50);
        cout << "Enter Account Type : ";
        cin.getline(act, 10);
    }
};
class deposite : public bank
{
protected:
    int bb = 1000;

private:
    int de, wi, x, t;
    int yn;

public:
    void dep()
    {
    x:
        cout << "\nEnter Deposit amount : ";
        cin >> de;
        cout << "Enter more amount to deposit [Yes : press - 1/No : press - 0] : ";
        cin >> yn;
        bb += de;
        if (yn == 1)
        {
            goto x;
        }
        else
        {
        }
        cout << "\nYour bank Balance : " << bb;
    }
    void wit()
    {
    x:
        cout << "\n\nEnter withdraw amount : ";
        cin >> de;
        if (de <= bb)
        {
            cout << "Enter more amount to withdraw [Yes : press - 1/No : press - 0] : ";
            cin >> yn;
            bb -= de;
            if (yn == 1)
            {
                goto x;
            }
            else
            {
            }
        }
        else
        {
            cout << "\nInvalid Amount!!!!!";
            goto x;
        }
        cout << "\nYour bank Balance : " << bb << endl;
    }
};
class loan : public deposite
{
private:
    int lamt, l;
    char lat[20], lan[15];

public:
    void lone()
    {
    x:
        cout << "\nEnter 7 Digits Loan Account Number : ";
        fflush(stdin);
        cin.getline(lan, 15);
        l = strlen(lan);
        if (l == 7)
        {
        }
        else
        {
            cout << "\ninvalid Account Number!!!!";
            goto x;
        }
        cout << "Enter Lone Type : ";
        fflush(stdin);
        cin.getline(lat, 20);
        cout << "Enter Loan Amount : ";
        cin >> lamt;
    }
    void disp()
    {
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\nAccount number : " << ac;
        cout << "\nName : " << nm;
        cout << "\nAccount balance : " << bb;
        cout << "\nLoan Account Number : " << lan;
        cout << "\nLonan Type : " << lat;
        cout << "\nLoan Amount : " << lamt;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
};
int main()
{
    loan a;
    a.edetails();
    a.dep();
    a.wit();
    a.lone();
    a.disp();
}