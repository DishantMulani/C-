#include<iostream>
using namespace std;
class base
{
    public:
    virtual void dis()
    {
        cout<<"Base class in involved ";
    }
};
class derived : public base
{
    public:
    void dis()
    {
        cout<<"\nDerived class in involved ";
    }
};
int main()
{
    base *p,b;
    derived d;
    p=&b;
    p->dis();
    p=&d;
    p->dis();
}