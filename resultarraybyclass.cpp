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
    int i, n;
    Result m[10];
    cout << "enter number of students :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        cout << endl
             << endl;
        cout << "Roll no : " << i << endl;
        m[i].get();
        m[i].dis();
    }
}