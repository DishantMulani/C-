#include <iostream>
using namespace std;
class Math
{

    int a, b;

public:
    void set(int x, int y)
    {

        a = x;
        b = y;
    }
    int get()
    {
        return a + b;
    }
};
int main()
{
    int x, y;
    Math sum;
    cout << "enter x :";
    cin >> x;
    cout << "enter y :";
    cin >> y;
    sum.set(x, y);
    cout << "\n a + b :" << sum.get();
}
