#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter Name : ";
    getline(cin, name);
    cout << "\nName : " << name;
}
/*
#include <iostream>
#include <cstring>
using namespace std;
int main()
{ 
    char name[50];
    cout << "Enter Name : ";
    cin.getline(name,50);
    cout << "\nName : " << name;
}*/