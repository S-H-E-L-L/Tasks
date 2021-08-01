#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    if (!word.empty())
    {
        word[0] = toupper(word[0]);
    }
    std::cout << word;
}