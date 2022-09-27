#include<iostream>
int main()
{
    int n,i,b=1,c;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=1;i<=n;i*=2)
    {
        c=i*b;
        std::cout<<" "<<c;
        b++;
    }
}