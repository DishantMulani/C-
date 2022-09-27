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
        cout<<"\nName : Mulani Dishant Vijaybhai\nReligion : Hindu\nCaste : Leuva patel\nMother's Name:Vilasben\nBirth Date : 25/08/2002\nBlood group : A+\nAddress : 101,Keshav park so,s-\n\tarthana jakatnaka,surat\nPincode : 395006";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~";
    }
    void showdata()
    {
        cout << "\nAccount No : "<<accno<<endl;
        cout<<"Balance : "<<bal;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~";
    }
    void deposit()
    {
        cout<<"\nEnter Amount To Deposit : ";
        cin>>amt;
        bal+=amt;
        cout<<"Balance : "<<bal;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~";
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
        cout<<"\n~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    int c;
    bank ba;
    while(1)
    {
        cout<<"\n1.DETAILS";
        cout<<"\n2.BALANCE ENQIURY";
        cout<<"\n3.DEPOSIT MONEY";
        cout<<"\n4.WITHDRAW MONEY";
        cout<<"\n0.EXIT";
        cout<<"\nEnter your choice : ";
        cin>>c;
        cout<<"\n-------------------------------";
        switch(c)
        {
        case 1:
            ba.setvalue();
            break;
        case 2:
            ba.showdata();
            break;
        case 3:
            ba.deposit();
            break;
        case 4:
            ba.withdrawl();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout<<"\nInvalid Choice\n~~~~~~~~~~~~~~~~~~~~";
        }
    }
}