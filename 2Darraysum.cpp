#include <iostream>
int main()
{
    int r, c, i, j, a[10][10], b[10][10], sum[10][10];
    std::cout << "enter row :";
    std::cin >> r;
    std::cout << "enter column :";
    std::cin >> c;
    if (r == c)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                std::cout << "enter a["
                          << "" << i << "]["
                          << "" << j << "] = ";
                std::cin >> a[i][j];
            }
        }
        std::cout << std::endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                std::cout << "enter b["
                          << "" << i << "]["
                          << "" << j << "] = ";
                std::cin >> b[i][j];
            }
        }
        std::cout << std::endl;
        std::cout << "~~~~~~~~~~~~~" << std::endl
                  << std::endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
            std::cout << std::endl;
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                std::cout << "\t" << sum[i][j];
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "enter same row and column!!!!!!!!!";
    }
}