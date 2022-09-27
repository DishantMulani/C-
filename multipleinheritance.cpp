#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"a : ";
    }
    ~base()
    {
        cout<<"\na : ";
    }
};
class base1
{
    public:
    base1()
    {
        cout<<"\nb : ";
    }
    ~base1()
    {
        cout<<"\nb : ";
    }
};
class derived : public base,public base1
{
    public:
    derived()
    {
        cout<<"\na+b : ";
    }
    ~derived()
    {
        cout<<"\n\na+b : ";
    }
};
int main()
{
    derived obj;
}
