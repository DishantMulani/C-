#include<iostream>
int main()
{
    char n='A';
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        { 
            std::cout<<" "<<n;
            n++;
        }
        std::cout<<std::endl;
    }
}