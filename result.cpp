#include <iostream>
int main()
{
    int m, p, c, co, t;
    float pe;
    char g;
    std::cout << "enter maths mark :";
    std::cin >> m;
    std::cout << "enter physics mark :";
    std::cin >> p;
    std::cout << "enter chemistry mark :";
    std::cin >> c;
    std::cout << "enter computer mark :";
    std::cin >> co;
    t = m + p + c + co;
    pe = t / 4;
    if (m < 35 || p < 35 || c < 35 || co < 35)
    {
        std::cout << "total :" << t;
        std::cout << "\nyou are Faild";
    }
    else
    {
        if (pe > 75)
        {
            g = 'A';
        }
        else if (pe >= 60 && pe < 75)
        {
            g = 'B';
        }
        else if (pe >= 45 && pe < 60)
        {
            g = 'C';
        }
        else if (pe >= 35 && pe < 45)
        {
            g = 'D';
        }
        else if (pe < 35)
        {
            g = 'F';
        }
        std::cout << "\ntotal :" << t;
        std::cout << "\npersentage :" << pe;
        std::cout << "\ngrade :" << g;
    }
}