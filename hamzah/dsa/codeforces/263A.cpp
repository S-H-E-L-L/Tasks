#include <iostream>

int main()
{
    int moves = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int n;
            std::cin >> n;
            if (n == 1)
            {
                moves = abs(i - 2) + abs(j - 2);
            }
        }
    }
    std::cout << moves;
}