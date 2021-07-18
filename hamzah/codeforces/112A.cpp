#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    std::cin >> a >> b;

    int result = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (tolower(a[i]) > tolower(b[i]))
        {
            result = 1;
            break;
        }

        else if (tolower(a[i]) < tolower(b[i]))
        {
            result = -1;
            break;
        }
    }
    std::cout << result;
}