#include <iostream>
#include <string.h>
using namespace std;
class saving
{
    int bb = 1000;
    int de, wi, x, t;
    int yn;

public:
    static int count, c;
    void details1()
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "=======Saving Account Details=======\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1.Earn Intereste On Your Savings\n";
        cout << "2.Limited Number Of Transaction\n";
        cout << "3.Build Emergency Funds\n";
        cout << "4.Low Minimum Required Balance\n";
        cout << "5.Used For Salary Account\n";
        cout << "6.Suitable For Individual\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    void dep1()
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
    void wit1()
    {
    x:
        cout << "\n\nEnter withdraw amount : ";
        cin >> de;
        if (count >= 0 && count <= 2)
        {
            if (de <= bb)
            {
                cout << "Enter more amount to withdraw [Yes : press - 1/No : press - 0] : ";
                cin >> yn;
                bb -= de;
                if (yn == 1)
                {
                    count++;
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
        }
        else
        {
            cout << "\nSorry Today Transection compleate";
        }
        cout << "\n\nYour bank Balance : " << bb;
    }
    void dis1()
    {
        cout << "\nAccount balance : " << bb;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        c++;
    }
};
class current
{
    int bb = 1000;
    int de, wi, x, t;
    int yn;

public:
    static int d;
    void details2()
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "=======Current Account Details======\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1.No Intereste Earned\n";
        cout << "2.Unlimited Transaction\n";
        cout << "3.Used For Business\n";
        cout << "4.Low Minimum Required Balance\n";
        cout << "5.Used For Paying Bills And Business \n  Transaction\n";
        cout << "6.Business People\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    void dep2()
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
    void wit2()
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
        cout << "Your bank Balance : " << bb;
    }
    void dis2()
    {
        cout << "\nAccount balance : " << bb;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        d++;
    }
};
class bank : public saving, public current
{
private:
    int l;
    char ac[15];
    char nm[50];

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
    }
    void dipl()
    {
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\nAccount number : " << ac;
        cout << "\nName : " << nm;
    }
};
int saving::count;
int saving::c;
int current::d;
int main()
{
    int de, c, z, q, i = 1;
    bank a;

z:
    cout << "\nAccount : " << i++;
    cout << "\n~~~~~~~~~~~~";
    while (1)
    {
        cout << "\n1.Detail About Saving And Current Account\n2.Saving Account\n3.current Account\n4.Total Account\n0.Exit";
        cout << "\nEnter your choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            a.details1();
            a.details2();
            break;
        case 2:
            a.edetails();
            a.dep1();
            a.wit1();
            a.dipl();
            a.dis1();
            goto z;
            break;
        case 3:
            a.edetails();
            a.dep2();
            a.wit2();
            a.dipl();
            a.dis2();
            goto z;
            break;
        case 4:
            cout << "\n----> Total Saving Account : " << saving::c;
            cout << "\n----> Total Current Account : " << current::d << endl;
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\nenter right choice.....";
        }
    }
}