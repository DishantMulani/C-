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
class derived3 : public derived1,public derived2
{
    public:
    derived3()
    {
        cout<<"\na+b : ";
    }
    ~derived3()
    {
        cout<<"\n\na+b : ";
    }
};
int main()
{
    derived3 obj;
}
