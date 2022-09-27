#include<iostream>
int main()
{
    char n='A';
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        { 
            if(j==1 || j==3 || j==5)
            {
                std::cout<<" "<<(char)(n+32);
            }
            else
            {
                std::cout<<" "<<n;
            }
            n++;
        }
        std::cout<<std::endl;
    }
}