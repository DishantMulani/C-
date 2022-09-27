#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int rl;
    char nm[50];

public:
    void read()
    {
        cout << "Enter Roll no : ";
        cin >> rl;
        cout << "Enter Name : ";
        fflush(stdin);
        cin.getline(nm, 50);
    }
    void display()
    {
        cout << "\n~~~~~~~~~~~~~~~\n\nRoll no : " << rl;
        cout << "\nName : " << nm;
    }
};
class marks : public student
{
protected:
    int s1, s2, s3;

public:
    void getmarks()
    {
        cout << "Enter s1 mark : ";
        cin >> s1;
        cout << "Enter s2 mark : ";
        cin >> s2;
        cout << "Enter s3 mark : ";
        cin >> s3;
    }
    void putmarks()
    {
        cout << "\ns1 :" << s1;
        cout << "\ns2 :" << s2;
        cout << "\ns3 :" << s3;
    }
};
class result : public marks
{
private:
    int t;
    float p;
    char div[10];

public:
    void process()
    {
        t = s1 + s2 + s3;
        p = t / 3;
        p >= 60 ? strcpy(div, "First") : p >= 50 ? strcpy(div, "Second")
                                                 : strcpy(div, "Third");
    }
    void printresult()
    {
        cout << "\nTotal : " << t;
        cout << "\nPersentage : " << p;
        cout << "\nDivision : " << div;
    }
};

int main()
{
    result a;
    a.read();
    a.getmarks();
    a.process();
    a.display();
    a.putmarks();
    a.printresult();
}
