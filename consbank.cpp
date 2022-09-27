#include<iostream>
using namespace std;
class Gautam 
{
    int bal,amt;
    public:
    Gautam(int b)
    {
        bal=b;
    }
    void depo()
    {
        cout<<"enter amount :";
        cin>>amt; 
        bal+=amt;
        cout<<"\n depo is : "<<bal;
    }
    void wdr()
    {
         cout<<"enter amount :";
        cin>>amt; 
        if(bal>=amt)
        {
            bal-=amt;
            cout<<"\n bal is : "<<bal;
        }
        else
        {
            cout<<"\n sorry balance is not valide : ";
        }
    }
    void dis()
    {
        cout<<"\n total amount is  : "<<bal;
    }
};
int main()
{
    int b,ch;
    cout<<"\n enter bal :";
    cin>>b;
    Gautam g1(b);
    while(1)
    {
        cout<<"\n 1.depos ";
        cout<<"\n 2.wdrrr ";
        cout<<"\n 3.show ";
        cout<<"\n 4.exit ";
        cout<<"\n enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                g1.depo();
                break;
            case 2:
                g1.wdr();
                break;
            case 3:
                g1.dis();
                break;
            case 4:
                exit(0);
                break;

        }
    }
    
}
