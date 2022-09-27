#include<iostream>
int main()
{
    int n,i;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            std::cout<<" "<<i;
        }
        else
        {
            std::cout<<" "<<i*i;
        }
    }
}