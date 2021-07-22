#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        std::string operation;
        std::cin >> operation;

        if (operation == "X++")
            x++;
        else if (operation == "++X")
            ++x;
        else if (operation == "X--")
            x--;
        else if (operation == "--X")
            --x;
    }
    std::cout << x;
}