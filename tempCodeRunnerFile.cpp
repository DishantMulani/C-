#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\n base constuctor...";
    }
    ~base()
    {
        cout<<"\n base destructor...";
    }
};
class base1
{
    public:
    base1()
    {
        cout<<"\n base1 consructor...";
    }
    ~base1()
    {
        cout<<"\n base1 destructor...";
    }
};
class derived : public base1
{
    public:
    {
        cout<<"\n derived consturctor...";
    }
    ~derived()
    {
        cout<<"\n derived destructor...";
    }
};
int main()
{
    derived obj();
}
