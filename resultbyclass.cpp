#include <iostream>
using namespace std;
class Result
{
    int m1, m2, m3;

public:
    void get()
    {
        cout << "enter mark of maths :";
        cin >> m1;
        cout << "enter mark of physics :";
        cin >> m2;
        cout << "enter mark of chemistry :";
        cin >> m3;
    }
        int tot()
        {
            return m1 + m2 + m3;
        }
        int per()
        {
            return tot() / 3;
        }
        void dis()
        {
            cout << "\n~~~~~~~~~~~~~~~~"
                 << "\n\nmaths : " << m1 << "\nphysics : " << m2 << "\nchemistry :" << m3 << "\n\n~~~~~~~~~~~~~~~~"
                 << "\nTotal : " << tot() << "\npersentage : " << per();
        }
    
};
    int main()
    {
        Result m;
        m.get();
        m.dis();
    }