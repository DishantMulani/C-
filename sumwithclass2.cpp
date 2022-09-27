#include<iostream>
using namespace std;
class Math
{
    public:
    int x,y;
};
int main()
{
    Math sum;
    sum.x=10;
    sum.y=20;
    cout<<"\n x + y ="<<sum.x+sum.y;
}