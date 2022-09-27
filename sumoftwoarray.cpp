#include<iostream>
int main()
{
    int n,i,a[10],b[10],sum[10];
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
        std::cout<<"enter b["<<""<<i<<"] = ";
        std::cin>>b[i];
    }
    std::cout<<"~~~~~~~~~~~~~~~";
    std::cout<<std::endl;
    for(i=0;i<n;i++)
    {
       sum[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        std::cout<<"a["<<""<<i<<"] : "<<""<<a[i]<<" + "<<"b["<<""<<i<<"] : "<<""<<b[i]<<" = "<<sum[i];
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"\t  or\t"<<std::endl<<std::endl;
    for(i=0;i<n;i++)
    {
        std::cout<<""<<a[i]<<" + "<<""<<b[i]<<" = "<<sum[i];
        std::cout<<std::endl;
    }
}