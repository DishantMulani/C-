#include<iostream>
int main()
{
    char i,j;
    for(i='A';i<='Z';i++)
    {
        for(j='A';j<=i;j++)
        { 
            std::cout<<"  "<<j;
        }
        std::cout<<std::endl;
    }
}