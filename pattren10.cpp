#include<iostream>
int main()
{
    int n,i,j;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            std::cout<<"\t"<<j;
        }
        std::cout<<std::endl;
    }
}