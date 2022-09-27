#include<iostream>
int main()
{
    int n,i,a[10],b[10]; 
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cout<<"enter a["<<""<<i<<"] = ";
        std::cin>>a[i];
    }
    std::cout<<std::endl;
    for(i=0;i<n;i++)
    {
        std::cout<<"a["<<""<<i<<"] = "<<""<<a[i];
        std::cout<<std::endl;
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    std::cout<<std::endl;
    for(i=0;i<n;i++)
    {
        std::cout<<"b["<<""<<i<<"] = "<<""<<b[i];
        std::cout<<std::endl;
    }
}