#include <iostream>
#include <string>

bool isDangerous(std::string str)
{
    if (str.length() < 7)
    {
        return false;
    }

    for (int i = 0; i <= str.length() - 7; i++)
    {
        if (str.substr(i, 7) == "0000000" || str.substr(i, 7) == "1111111")
        {
            return true;
        }
    }
    return false;
}

int main()
{
    std::string str;
    std::cin >> str;
    if (isDangerous(str))
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}