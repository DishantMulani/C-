#include<iostream>
int main()
{
    int i,t;
    std::cout<<"enter your income :";
    std::cin>>i;
    if(i<=2500)
    {
        t=0;
    }
    else if(i>2500 && i<=5000)
    {
        t=(i-2500)*0.1;
    } 
    else if(i>5000 && i<=10000)
    {
        t=250+(i-5000)*0.2;
    } 
    else if(i>10000)
    {
        t=1250+(i-10000)*0.5;
    } 
    std::cout<<"touy tax slab rate :"<<t;
}