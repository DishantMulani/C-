#include <iostream>
int main()
{
    char i, j;
    for (i = 65; i <= 90; i += 4)
    {
        if (i < 89)
        {
            j = i + 34;
            std::cout << " " << i << " " << j;
        }
        else
        {
            std::cout << " " << i;
        }
    }
}