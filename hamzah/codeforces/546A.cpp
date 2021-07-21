#include <iostream>
#include <algorithm>

int main()
{
    unsigned long long int k, n, w;
    std::cin >> k >> n >> w;

    unsigned long long int cost = k * w * (w + 1) / 2;
    cost = std::max(cost, n);
    std::cout << cost - n;
}