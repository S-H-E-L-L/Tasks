#include <iostream>
#include <cmath>
#include <set>

int main()
{
    std::set<int> occs;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        occs.insert(num);
    }
    std::cout << occs.size();
}