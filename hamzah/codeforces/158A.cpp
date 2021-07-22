#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> scores[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[k - 1] && scores[i] > 0)
            ++total;
        else
            break;
    }
    std::cout << total;
}