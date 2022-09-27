#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\na : ";
    }
    ~base()
    {
        cout<<"\na : ";
    }
};
class derived1 : public base
{
    public:
    derived1()
    {
        cout<<"\nb : ";
    }
    ~derived1()
    {
        cout<<"\nb : ";
    }
};
class derived2 : public base
{
    public:
    derived2()
    {
        cout<<"\nc : ";
    }
    ~derived2()
    {
        cout<<"\nc : ";
    }
};
class derived3 : public base
{
    public:
    derived3()
    {
        cout<<"\nd : ";
    }
    ~derived3()
    {
        cout<<"\n\nd : ";
    }
};
int main()
{
    derived1 obj1;
    derived2 obj2;
    derived3 obj3;
}
