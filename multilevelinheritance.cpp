#include<iostream>
using namespace std;
class Base
{
    
    public:
    int a=10;
    Base()
    {     
        cout<<"a : "<<a;
    }
    ~Base()
    {
        cout<<"\na : "<<a;
    }
};
class Derived1 : public Base
{
    
    public:
    int b=20;
    Derived1()
    {       
        cout<<"\nb : "<<b;
    }
    ~Derived1()
    {
        cout<<"\nb : "<<b;
    }   
};
class Derived2 : public Derived1
{
    
    public:
    int c;
    Derived2()
    {   
        c=a+b;   
        cout<<"\nc : "<<c;
    }
    ~Derived2()
    {
       cout<<"\n\nc : "<<c;
    }   
};
int main()
{
    Derived2 obj1;
}