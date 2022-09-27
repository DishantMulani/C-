#include <iostream>
using namespace std;
class Dishant
{
    int acc_no, bal, amt;
    string name;

public:
    static int count, wi, di, tdi;
    int y;
    void come()
    {
        cout << "\nenter account no :";
        cin >> acc_no;
        cout << "enter balance :";
        cin >> bal;
        cout << "enter name :";
        cin >> name;
        count++;
    }
    void depo()
    {
        cout << "\nenter amount :";
        cin >> amt;
        bal += amt;
        cout << "depo is : " << bal;
        tdi += amt;
        di = tdi;
        if (di != 0)
        {
            di = 0;
         di += amt;
        }
    }
    void wdr()
    {
        cout << "\nenter amount :";
        cin >> amt;
        if (bal >= amt)
        {
            bal -= amt;
            cout << " bal is : " << bal;
        }
        else
        {
            cout << "\n sorry balance is not valide : ";
        }
        wi += amt;
    }
    void dis()
    {
        cout << "\n"
             << "  " << acc_no << " - " << name << " - " << bal << endl;
    }
};
int Dishant::di;
int Dishant::wi;
int Dishant::count;
int Dishant::tdi;
int main()
{
    int ac, ch, x, i = 1;

    Dishant d;
x:
    cout << "\naccount number : " << i++ << "\n~~~~~~~~~~~~~~~~~~~";
    d.come();
    while (1)
    {
        cout << "\n\n 1.depos ";
        cout << "\n 2.wdrrr ";
        cout << "\n 3.show ";
        cout << "\n 4.Next account ";
        cout << "\n 5.Personal today details ";
        cout << "\n 6.Today all transaction ";
        cout << "\n\nenter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            d.depo();
            break;
        case 2:
            d.wdr();
            break;
        case 3:
            d.dis();
            break;
        case 4:
            goto x;
            break;
        case 5:
            cout << "\nTotal amount of Deposit :" << Dishant::tdi;
            break;
        case 6:
            cout << "\ntotal account number :" << Dishant::count;
            cout << "\nTotal amount of Deposit :" << Dishant::di;
            cout << "\nTotal amount of Withdrawal :" << Dishant::wi;
            break;
        }
    }
}