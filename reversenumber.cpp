#include<iostream>
int main()
{
    int n,rem,rev=0;
    std::cout<<"enter number :";
    std::cin>>n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    std::cout<<"reverse number :"<<rev;
}