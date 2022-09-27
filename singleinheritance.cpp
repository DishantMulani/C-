#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor called";
    }
    ~Base()
    {
        cout<<"\nBase destructor called";
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"\nDerived Constructor called";
    }
    ~Derived()
    {
        cout<<"\nDerived  destructor called";
    }   
};
int main()
{
    Derived obj;
}