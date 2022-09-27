#include<iostream>
int main()
{
    int n,i,j;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=2;i<=n;i+=2)
    {
        for(j=1;j<=n/2;j++)
        {
            std::cout<<"\t"<<i;
        }
        std::cout<<std::endl;
    }
}