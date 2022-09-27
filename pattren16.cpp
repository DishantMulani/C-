#include<iostream>
int main()
{
    char n,i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            std::cout<<"\t"<<i;
        }
        std::cout<<std::endl;
    }
}