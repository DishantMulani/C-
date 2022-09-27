#include<iostream>
using namespace std;
class bank
{
    long accno,amt,bal=0,a;
public:
    void setvalue()
    {
        cout<<"\nEnter Your Account No :";
        cin >> accno;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
    void showdata()
    {
        cout << "\nAccount No : "<<accno<<endl;
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
    bank ba[100];
ab:
    i++;
    cout<<"Account: "<<i<<"\n------------";
    while(1)
    {
        cout<<"\n1.ACCOUNT NO";
        cout<<"\n2.BALANCE ENQIURY";
        cout<<"\n3.DEPOSIT MONEY";
        cout<<"\n4.WITHDRAW MONEY";
        cout<<"\n5.NEXT ACCOUNT";
        cout<<"\n0.EXIT";
        cout<<"\nEnter your choice : ";
        cin>>c;
        cout<<"_____________________________\n";
        switch(c)
        {
        case 1:
            ba[i].setvalue();
            break;
        case 2:
            ba[i].showdata();
            break;
        case 3:
            ba[i].deposit();
            break;
        case 4:
            ba[i].withdrawl();
            break;
        case 5:
            goto ab;
        case 0:
            exit(0);
        default:
            cout<<"\nInvalid Choice!!!\n______________________________";
        }
    }
}