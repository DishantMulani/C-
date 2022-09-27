#include<iostream>
int main()
{
    int n,i,j;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            std::cout<<" "<<i<<" X "<<" "<<j<<" = "<<" "<<i*j<<std::endl;
        }
        std::cout<<"~~~~~~~~~~~~~~~~"<<std::endl;
    }
}