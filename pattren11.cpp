#include<iostream>
int main()
{
    int n=1,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<"\t"<<(n%2!=0);
            n++;
        }
        std::cout<<std::endl;
    }
}