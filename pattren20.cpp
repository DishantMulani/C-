#include<iostream>
int main()
{
    char n='A';
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            std::cout<<"\t"<<n;
            n++;
        }
        std::cout<<std::endl;
    }
}