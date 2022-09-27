#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a = 25.45454545;
    cout << setprecision(2) << a << endl;
    cout << setprecision(3) << a << endl;
    cout << setprecision(4) << a << endl;
    cout << setprecision(5) << a << endl;
    cout << setprecision(6) << a << endl;
    cout << setprecision(7) << a << endl;
}