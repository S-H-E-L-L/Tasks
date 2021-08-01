#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<int> applicants(n), apartments(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> applicants[i];
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << applicants[i] << ' ';
    // }
    // std::cout << '\n';
    // for (int i = 0; i < m; i++)
    // {
    //     std::cout << apartments[i] << ' ';
    // }

    // std::cout << '\n';

    int num = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(applicants[i] - apartments[j]) <= k)
        {
            num++;
            i++;
            j++;
        }
        else if (applicants[i] < apartments[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    std::cout << num;
}