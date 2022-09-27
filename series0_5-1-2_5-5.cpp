#include<iostream>
int main()
{
    int n,i;
    float t1=0.5,t2,nt=0;
    std::cout<<"enter term :";
    std::cin>>n;
    std::cout<<" "<<t1;
    for(i=0;i<=n;i++)
    {
        t2=i+0.5;
        nt=t1+t2;
        std::cout<<" "<<nt;
        t1=nt;
    }
}