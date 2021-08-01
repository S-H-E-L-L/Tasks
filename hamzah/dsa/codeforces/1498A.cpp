#include <iostream>

unsigned long long digitSum(unsigned long long num)
{
    unsigned long long sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if (b)
        return gcd(b, a % b);
    else
        return a;
}
unsigned long long result(unsigned long long num)
{
    unsigned long long sum = digitSum(num);
    unsigned long long g = gcd(num, sum);
    if (g == 1)
    {
        return result(num + 1);
    }
    else
    {
        return num;
    }
}

int main()
{
    unsigned long long n;
    std::cin >> n;
    for (unsigned long long i = 0; i < n; i++)
    {
        unsigned long long num;
        std::cin >> num;

        std::cout << result(num) << '\n';
    }
}