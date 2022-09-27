#include<iostream>
int main()
{
    char n='A';
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        { 
            if(i==1 || i==3 || i==5)
            {
                std::cout<<" "<<n;
            }
            else
            {
                std::cout<<" "<<(char)(n+32);
            }
            n++;
        }
        std::cout<<std::endl;
    }
}