#include <iostream>
#include <string.h>
using namespace std;
class bank
{
private:
    char ac[15];
    char nm[50];

public:
    int l, x;
    void edetails()
    {
    x:
        cout << "\nEnter 7 Digits Account Number : ";
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
    }
    void details()
    {
        cout << "\n\n~~~~~~~~~~~~~~~~\n\nAccount number : " << ac;
        cout << "\nName : " << nm;
    }
};
class de : public bank
{
protected:
    int bb = 1000;
    int de, wi, x, t;
    int yn;

public:
    void dep()
    {
    x:
        cout << "\nEnter Deposit amount : ";
        cin >> de;
        cout << "Enter more amount to deposit [1/0] : ";
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
        cout << "Enter more amount to withdraw [1/0] : ";
        cin >> yn;
        bb -= de;
        if (yn == 1)
        {
            goto x;
        }
        else
        {
        }
        cout << "Your bank Balance : " << bb;
    }
    void display()
    {
        cout << "\nAccount balance : " << bb;
    }
};
int main()
{
    de a;
    a.edetails();
    a.dep();
    a.wit();
    a.details();
    a.display();
}