#include<iostream>
int main()
{
    int n=1,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            std::cout<<"\t"<<n++;
        }
        n+=5;
        std::cout<<std::endl;
    }
}