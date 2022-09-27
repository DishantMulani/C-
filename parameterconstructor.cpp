#include <iostream>
using namespace std;
class Dishant
{
public:
    int sum(int n, int m)
    {
        return n + m;
    }
    float sum(float n, float m)
    {
        return n + m;
    }
};
int main()
{
    Dishant d1;
    cout << "int sum :" << d1.sum(10, 20);
    cout << "\nfloat sum :" << d1.sum(10, 20);
}