#include<iostream>
int main()
{
    int r,c,i,j,a[10][10];
    std::cout<<"enter row :";
    std::cin>>r;
    std::cout<<"enter column :";
    std::cin>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cout<<"enter a["<<""<<i<<"]["<<""<<j<<"] = ";
            std::cin>>a[i][j];
        }
    }
    std::cout<<std::endl;
    std::cout<<"~~~~~~~~~~~~~"<<std::endl<<std::endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            std::cout<<"   "<<a[i][j];
        }
        std::cout<<std::endl;
    }
}