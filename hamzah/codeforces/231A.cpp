#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int sureness = 0;
        for (int j = 0; j < 3; j++)
        {
            int number;
            std::cin >> number;
            sureness += number;
        }

        if (sureness > 1)
            ++total;
    }
    std::cout << total;
}