#include <iostream>
using namespace std;
class Dishant
{
    int age;

public:
    Dishant()
    {
        age = 20;
        cout << "\nDefault Age : " << age;
    }
    Dishant(int n)
    {
        age = n;
        cout << "\nparameter Age : " << age;
    }
    Dishant(Dishant &new_age)
    {
        age = new_age.age;
        cout << "\nCopy Age : " << age;
    }
};
int main()
{
    Dishant age1;
    Dishant age2(25);
    Dishant age3(age1);
}