#include <iostream>
using namespace std;
class shape
{
protected:
    int hi, wi;

public:
    virtual int getarea() = 0;
    void setwit(int w)
    {
        wi = w;
    }
    void sethig(int h)
    {
        hi = h;
    }
};
class rectangle : public shape
{
public:
    int getarea()
    {
        return (wi * hi);
    }
};
class triangle : public shape
{
public:
    int getarea()
    {
        return (wi * hi) / 2;
    }
};
int main()
{
    rectangle r;
    r.setwit(10);
    r.sethig(10);
    cout << "Total Area of Rectangle : " << r.getarea();
    triangle t;
    t.setwit(10);
    t.sethig(10);
    cout << "\nTotal Area of Triangle : " << t.getarea();
    return 0;
}