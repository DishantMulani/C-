#include<iostream>
int main()
{
    char i,j;
    for(i='A';i<='Z';i++)
    {
        for(j=i;j>='A';j--)
        { 
            std::cout<<"  "<<j;
        }
        std::cout<<std::endl;
    }
}