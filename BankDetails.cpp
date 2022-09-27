#include <iostream>
using namespace std;
class Dishant
{
    int bal = 0, amt;

public:
    void Deposit()
    {
        cout << "\nEnter Amount To Diposit : ";
        cin >> amt;
        bal += amt;
        cout << "Your balance : " << bal << endl;
    }
    void Withdrawal()
    {
        cout << "\nEnter Amount To Withdraw : ";
        cin >> amt;
        if (bal >= amt)
        {
            bal -= amt;
            cout << "Your balance : " << bal << endl;
        }
        else
        {
            cout << "Invalid Amount!!!\n";
        }
    }
    void Inquiry()
    {
        cout << "\nYour Balance : " << bal << endl;
    }
};
int main()
{
    int accno, c, D, i = 1;
    Dishant d1[100];
D:
    cout << "\nAccount : " << i++ << "\n~~~~~~~~~~~~~~~~~~";
    cout << "\nEnter Acount No : ";
    cin >> accno;
    while (1)
    {
        cout << "\n1.DEPOSIT";
        cout << "\n2.WITHDRAW";
        cout << "\n3.INQUIRY";
        cout << "\n4.Next Account";
        cout << "\n0.EXIT";
        cout << "\nEnter choise : ";
        cin >> c;
        switch (c)
        {
        case 1:
            d1[i].Deposit();
            break;
        case 2:
            d1[i].Withdrawal();
            break;
        case 3:
            d1[i].Inquiry();
            break;
        case 4:
            goto D;
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Enter Right Choise!!!";
            break;
        }
    }
}