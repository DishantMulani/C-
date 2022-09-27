#include<iostream>
int main()
{
    int n,i;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=1;i<=n;i*=2)
    {
        std::cout<<" "<<i;
    }
}