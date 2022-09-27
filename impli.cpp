#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    char y = 'a';
    float z;
    y = x + y;
    x = x + y;
    z = x + 1.9;
    cout << "X = " << x;
    cout << "\nY = " << y;
    cout << "\nZ = " << z;
}