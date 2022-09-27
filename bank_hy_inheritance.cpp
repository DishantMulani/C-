#include <iostream>
#include <string.h>
using namespace std;
class bank
{

    char ifs[15], bn[50], x, l;

public:
    void bdetails()
    {
    x:
        cout << "\nEnter 11 IFSC Number : ";
        fflush(stdin);
        cin.getline(ifs, 15);
        l = strlen(ifs);
        if (l == 11)
        {
        }
        else
        {
            cout << "\ninvalid IFSE Number!!!!";
            goto x;
        }
        cout << "Enter bank name :";
        fflush(stdin);
        cin.getline(bn, 50);
    }
};
class saving : public bank
{
    int bb1 = 1000;
    int de1, wi1, x, t;
    int yn;

public:
    static int count;
    void dep1()
    {
    x:
        cout << "\nEnter Deposit amount : ";
        cin >> de1;
        cout << "Enter more amount to deposit [Yes : press - 1/No : press - 0] : ";
        cin >> yn;
        bb1 += de1;
        if (yn == 1)
        {
            goto x;
        }
        else
        {
        }
    }
    void wit1()
    {
    x:
        cout << "\n\nEnter withdraw amount : ";
        cin >> de1;
        if (count >= 0 && count <= 2)
        {
            if (de1 <= bb1)
            {
                cout << "Enter more amount to withdraw [Yes : press - 1/No : press - 0] : ";
                cin >> yn;
                bb1 -= de1;
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
    }
    void dis1()
    {
        cout << "\nAccount balance : " << bb1;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
};
class current : public bank
{
    int bb2 = 10000;
    int de2, wi2, x, t;
    int yn;

public:
    void dep2()
    {
    x:
        cout << "\nEnter Deposit amount : ";
        cin >> de2;
        cout << "Enter more amount to deposit [Yes : press - 1/No : press - 0] : ";
        cin >> yn;
        bb2 += de2;
        if (yn == 1)
        {
            goto x;
        }
        else
        {
        }
    }
    void wit2()
    {
    x:
        cout << "\n\nEnter withdraw amount : ";
        cin >> de2;
        if (de2 <= bb2)
        {
            cout << "Enter more amount to withdraw [Yes : press - 1/No : press - 0] : ";
            cin >> yn;
            bb2 -= de2;
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
    }
    void dis2()
    {
        cout << "\nAccount balance : " << bb2;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
};
class customer : public saving, public current
{
protected:
    char ac[15];
    char nm[50];

private:
    int l, ch;

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
    void disp()
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\nAccount number : " << ac;
        cout << "\nName : " << nm;
    }
    void adetails()
    {
        while (1)
        {
            cout << "\n\n====Account Balance Details====\n\n1.Saving Account Balance\n2.Current Account Balance\n0.exit";
            cout << "\nEnter your choice : ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "\n\nSaving Account Details";
                customer::disp();
                saving::dis1();
                break;
            case 2:
                cout << "\n\nCurrent Account Details";
                customer::disp();
                current::dis2();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout << "Enter Right Choice !!!!!!!";
            }
        }
    }
};
int saving::count;
int main()
{
    int de, c, ch, q;
    customer a;
    bank b;
    while (1)
    {
        cout << "\n1.Bank Details\n2.Saving Account\n3.current Account\n0.Exit";
        cout << "\nEnter your choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            b.bdetails();
            break;
        case 2:
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
            a.edetails();
            a.dep1();
            a.wit1();
            a.adetails();
            break;
        case 3:
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
            a.edetails();
            a.dep2();
            a.wit2();
            a.adetails();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\nEnter Right Choice.....\n\n";
        }
    }
}