#include<iostream>
using namespace std;
class bank
{
    long amt,bal=0,a;
public:
    void showdata()
    {
        cout<<"Balance : "<<bal;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
    void deposit()
    {
        cout<<"\nEnter Amount To Deposit : ";
        cin>>amt;
        bal+=amt;
        cout<<"Balance : "<<bal;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
    void withdrawl()
    {
        cout<<"\nEnter Amount To Withdraw : ";
        cin>>a;
        if(a<=bal)
        {
            bal-=a;
            cout<<"Available Balance Is : "<<bal;
        }
        else
        {
            cout<<"\nSorry Invalid Balance !!!";
        }
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    int ab,c,i=0,b;
    long accno;
    bank ba[100];
ab:
    i++;
    cout<<"Account: "<<i<<"\n------------";
    cout<<"\nEnter Your Account No :";
    cin >> accno;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    while(1)
    {
        cout<<"\n1.BALANCE ENQIURY";
        cout<<"\n2.DEPOSIT MONEY";
        cout<<"\n3.WITHDRAW MONEY";
        cout<<"\n4.NEXT ACCOUNT";
        cout<<"\n0.EXIT";
        cout<<"\nEnter your choice : ";
        cin>>c;
        cout<<"_____________________________\n";
        switch(c)
        {
        case 1:
            ba[i].showdata();
            break;
        case 2:
            ba[i].deposit();
            break;
        case 3:
            ba[i].withdrawl();
            break;
        case 4:
            goto ab;
        case 0:
            exit(0);
        default:
            cout<<"\nInvalid Choice!!!\n______________________________";
        }
    }
}