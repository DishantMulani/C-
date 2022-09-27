#include <iostream>
using namespace std;
class Food
{
public:
    int t, n, v = 15, d = 15, p = 200, s = 50, h = 40, k = 100, to = 0;
    int va()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * v;
        cout << "Your order total prize : " << t;
        to += t;
    }
    int da()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * d;
        cout << "\nYour order total prize : " << t;
        to += t;
    }
    int pi()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * p;
        cout << "\nYour order total prize : " << t;
        to += t;
    }
    int se()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * s;
        cout << "\nYour order total prize : " << t;
        to += t;
    }
    int ho()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * h;
        cout << "\nYour order total prize : " << t;
        to += t;
    }
    int kh()
    {
        cout << "\nenter number of picese :";
        cin >> n;
        t = n * s;
        cout << "\nYour order total prize : " << t;
        to += t;
    }
    int bill()
    {
        cout << "\nYour Amount : " << to;
    }
    int pay()
    {
        int c, z;
        cout << "1.Cash \n2.Online\n3.Exit\n";
        while (1)
        {
            cout << "\nEnter Your choice :";
            cin >> c;
            switch (c)
            {
            case 1:
                cout << "Enter your payment :";
                cin >> z;
                if (to - z == 0)
                {
                    cout << "thanks For Visiting Our Site...........";
                }
                else
                {
                    cout << "Please pay Your Bill....";
                }
                break;
            case 2:
                cout << "thanks For Visiting Our Site...........";
                break;
            case 0:
                exit(0);
                break;
            }
        }
    }
};
int main()
{
    int ch;
    Food d1;
    cout << "Welcome to Dishant Food Store.....\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n1.Vadapav.....15/-     2.Dabeli.......15/-\n";
    cout << "3.Pizza........200/-     4.Sendwich.....50/-\n";
    cout << "5.Hotdog........40/-     6.Khaman......100/-\n";
    cout << "7.Total bill\n8.payment\n9.Exit";
    while (1)
    {
        cout << "\nenter your choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            d1.va();
            break;
        case 2:
            d1.da();
            break;
        case 3:
            d1.pi();
            break;
        case 4:
            d1.se();
            break;
        case 5:
            d1.ho();
            break;
        case 6:
            d1.kh();
            break;
        case 7:
            d1.bill();
            break;
        case 8:
            d1.pay();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "This Menu Not Available!!!!!!";
        }
    }
}