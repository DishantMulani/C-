#include<iostream>
int main()
{
    int n;
    std::cout<<"enter number :";
    std::cin>>n;
    if(n%2==0)
    {
        std::cout<<"given number"<<" "<<n<<" is even";
    }
    else
    {
        std::cout<<"given number"<<" "<<n<<" is odd";
    }
}