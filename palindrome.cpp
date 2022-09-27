#include<iostream>
int main()
{
    int n,c,rem,rev=0;
    std::cout<<"enter number :";
    std::cin>>n;
    c=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(c==rev)
    {
        std::cout<<"given number"<<" "<<rev<<" is palindrome";
    }
    else
    {
        std::cout<<"given number"<<" "<<rev<<" is not palindrome";
    }
}