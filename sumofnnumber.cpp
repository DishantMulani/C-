#include<iostream>
int main()
{
    int n,i,sum=0,sum1=0,sum2=0;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        std::cout<<" "<<i<<",";
        sum+=i;
        if(i%2==0)
        {
            sum1+=i;
        }
        else 
        {
            sum2+=i;
        } 
    }
    std::cout<<" = "<<sum<<std::endl;
    std::cout<<"sum of even number = "<<sum1<<std::endl;
    std::cout<<"sum of odd number = "<<sum2<<std::endl;
}