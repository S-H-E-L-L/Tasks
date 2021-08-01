#include <iostream>
#include <map>

int main()
{
    std::string username;
    std::cin >> username;

    std::map<char, int> occs;

    for (char letter = 'a'; letter <= 'z'; letter++)
    {
        occs[letter] = 0;
    }

    int distincts = 0;
    for (int i = 0; i < username.length(); i++)
    {
        if (occs[username[i]] == 0)
        {
            ++distincts;
        }
        ++occs[username[i]];
    }

    if (distincts % 2 == 0)
    {
        std::cout << "CHAT WITH HER!";
    }
    else
    {
        std::cout << "IGNORE HIM!";
    }
}