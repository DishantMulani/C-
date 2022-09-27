#include <iostream>
using namespace std;
class Dishant
{
    float unit, amount;

public:
    void sum()
    {
        cout << "enter unit :";
        cin >> unit;
    }
    void count()
    {
        if (unit > 0 && unit <= 100)
        {
            amount = unit * 0.6 + 50;
        }
        else if (unit > 100 && unit <= 300)
        {
            amount = 110 + (unit - 100) * 0.8;
        }
        else if (unit > 300)
        {
            amount = 260 + (unit - 300) * 0.9;
        }
        if (amount > 300)
        {
            amount += (amount)*0.15;
        }
    }
    void dis()
    {
        cout << "unit :" << unit << endl
             << "amount :" << amount;
    }
};
int main()
{
    int i, n;
    cout << "enter number of bills :";
    cin >> n;
    Dishant d1[100];
    for (i = 1; i <= n; i++)
    {
        cout << endl
             << endl;
        cout << "Bill no. :" << i << endl;
        d1[i].sum();
        d1[i].count();
        d1[i].dis();
    }
}