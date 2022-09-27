#include<iostream>
int main()
{
    int bs,gs,hra,da;
    std::cout<<"enter your salary :";
    std::cin>>bs;
    if(bs<=5000)
    {
        hra=bs*0.08;
        da=bs*0.2;
        gs=bs+hra+da;
    }
    else if(bs>5000 && bs<=10000)
    {
        hra=bs*0.12;
        da=bs*0.3;
        gs=bs+hra+da;
    }
    else if(bs>10000 && bs<=15000)
    {
        hra=bs*0.15;
        da=bs*0.4;
        gs=bs+hra+da;
    }
    else if(bs>15000)
    {
        hra=bs*0.2;
        da=bs*0.5;
        gs=bs+hra+da;
    }
    std::cout<<"your net salary : "<<gs;
}