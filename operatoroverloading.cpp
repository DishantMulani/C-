#include <iostream>
using namespace std;
class Dishant
{
    int longitude, latitude;

public:
    Dishant() {}
    Dishant(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout << "\n lg : " << longitude;
        cout << "\t lt : " << latitude;
    }
    Dishant operator+(Dishant);
};
Dishant Dishant::operator+(Dishant obj2)
{
    Dishant temp;
    temp.longitude = longitude + obj2.longitude;
    temp.latitude = latitude + obj2.latitude;
    return temp;
}
int main()
{
    Dishant obj1(10, 20), obj2(5, 30), obj3;
    obj1.show();
    obj2.show();
    obj3 = obj1 + obj2;
    obj3.show();
}