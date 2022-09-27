#include<iostream>
int main()
{
    float u,b;
    std::cout<<"enter unit :";
    std::cin>>u;
    if(u<=100)
    {
        b=u*0.6+50;
    }
    else if(u>100 && u<=300)
    {
        b=110+(u-100)*0.8;
    }
    else if(u>300)
    {
        b=270+(u-300)*0.9;
    }
    if(b>300)
    {
        b+=b*0.15;
    }
    std::cout<<"your electricity bill : "<<b;   
}