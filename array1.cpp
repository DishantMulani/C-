#include<iostream>
int main()
{
    int n,a[10],i;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=0;i<=n;i++)
    {
        std::cout<<"enter a["<<""<<i<<"] = ";
        std::cin>>a[i];
    }
    std::cout<<std::endl;
    for(i=0;i<=n;i++)
    {
        std::cout<<"a["<<""<<i<<"] = "<<" "<<a[i]<<std::endl;
    }
}