#include<iostream>
int main()
{
    int n,i,t1=0,t2=1,nt;
    std::cout<<"enter term :";
    std::cin>>n;
    std::cout<<" "<<t1<<" "<<t2;
    for(i=3;i<=n;i++)
    {
        nt=t1+t2;
        std::cout<<" "<<nt;
        t1=t2;
        t2=nt;
    }
}