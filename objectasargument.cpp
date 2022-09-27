#include <iostream>
using namespace std;
class Dishant
{
public:
    int a, b;
    Dishant() {}
    Dishant(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Dishant sum(Dishant E1, Dishant E2)
    {
        Dishant E;
        E.a = E1.a + E2.a;
        E.b = E1.b + E2.b;
        return E;
    }
};
int main()
{
    Dishant E1(10, 20), E2(30, 40), E3;
    E3 = E3.sum(E1, E2);
    cout << "\n E1 =\ta : " << E1.a << "\t\tb : " << E1.b;
    cout << "\n E2 =\ta : " << E2.a << "\t\tb : " << E2.b;
    cout << "\n-------------------------------";
    cout << "\n E3 =\ta : " << E3.a << "\t\tb : " << E3.b << endl;
}