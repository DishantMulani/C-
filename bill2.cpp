#include <iostream>
#include <string>
using namespace std;
struct orders
{
    string item;
    int qty;
    float price;
};
class Dishant
{
public:
    void title(string name)
    {
        cout << "\n\n\t\t DISHANT RESTAURANT";
        cout << "\n\t\t--------------------";
        cout << "\n\nName : " << name;
        cout << "\n--------------------------------------";
        cout << "\nITEM\t\tQTY\t\tTOTAL\n--------------------------------------\n";
    }
    void ord(string item, int qty, float price)
    {
        cout << "" << item << "\t\t" << qty << "\t\t" << qty * price << "\t\t\n";
    }
    void tot(float total)
    {
        float dis = total * 0.1, ntotal = total - dis, gst = ntotal * 0.18, ftotal = ntotal + gst;
        cout << "\n--------------------------------------";
        cout << "\nsub total\t\t\t" << total;
        cout << "\ndis @10\t\t\t\t" << dis;
        cout << "\n\t\t\t\t------";
        cout << "\nnet total\t\t\t" << ntotal;
        cout << "\nGST @18\t\t\t\t" << gst;
        cout << "\n--------------------------------------";
        cout << "\nFinal total\t\t\t" << ftotal;
        cout << "\n--------------------------------------";
    }
};
int main()
{
    int c, n, i, x;
    string name;
    float total = 0;
    struct orders o[10];
    Dishant d;
    cout << "\t  =====DISHANT RESTAURANT=====";
    cout << "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\n1.menu";
    cout << "\n2.order";
    cout << "\n0.exit\n";
x:
    cout << "\nenter your choice : ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "\nNo.\t  ITEM\t\tPRIZE\n------------------------------\n";
        cout << "1.\tVADAPAV\t\t15 ₹\n";
        cout << "2.\tDABELI\t\t15 ₹\n";
        cout << "3.\tFRANKI\t\t40 ₹\n";
        cout << "4.\tHOTDOG\t\t50 ₹\n";
        cout << "5.\tPIZZA\t\t150 ₹\n";
        cout << "6.\tDOSA\t\t100 ₹\n";
        cout << "7.\tSENDWITC\t75 ₹\n";
        cout << "8.\tMANCHURIAN\t90 ₹\n";
        cout << "9.\tCOCk\t\t30 ₹\n";
        cout << "10.\tTHUMBSUP\t30 ₹\n------------------------------\n";
        goto x;
    case 2:
        cout << "\nPlease Enter The Name Of Customer : ";
        fflush(stdin);
        getline(cin, name);
        cout << "\nPlease Enter The Number Of Item : ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "\n\nPlease Enter The Item : ";
            cin >> o[i].item;
            cout << "Please Enter The Quantity : ";
            cin >> o[i].qty;
            cout << "Please Enter The Unit Price : ";
            cin >> o[i].price;
            total += o[i].qty * o[i].price;
        }
        d.title(name);
        for (i = 0; i < n; i++)
        {
            d.ord(o[i].item, o[i].qty, o[i].price);
        }
        d.tot(total);
        break;
    case 0:
        cout << "\nThanks For Visiting Site.....\n(•‿•) Have A Nice Day";
        exit(0);
        break;
    default:
        cout << "\nPlease Enter Right Choice!!!!!!!!";
    }
}