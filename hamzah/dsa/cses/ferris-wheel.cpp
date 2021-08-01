#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, x;
    std::cin >> n >> x;
    std::vector<int> children(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> children[i];
    }
    sort(children.begin(), children.end());

    int lc = 0, rc = children.size() - 1;

    int wheels = 0;
    while (lc <= rc)
    {
        if (children[lc] + children[rc] <= x)
        {
            ++wheels;
            ++lc;
        }
        else if (children[rc] <= x)
        {
            ++wheels;
        }
        --rc;
    }
    std::cout << wheels;
}