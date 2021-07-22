#include <iostream>

int main()
{
    int n;
    int xSum = 0, ySum = 0, zSum = 0;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 && ySum == 0 && zSum == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}