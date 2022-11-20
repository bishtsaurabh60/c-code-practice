#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a = 3, b = 5, c = 14;
    int step = c;
    int count = 1;
    int d;

    int i = 2;

    while (c >= 0)
    {
        if (i % a == 0 || i % b == 0)
        {

            if (count == step)
                d = i;
            c--;
            count++;
        }
        i++;
    }
    c = d;

    while (true)
    {
        if (d % a == 0 && d % b == 0)
        {
            cout << c << " ";
            c = c - lcm(a, b);
        }
        else if (d % a == 0)
        {
            cout << c << " ";
            c = c - a;
        }
        else if (d % b == 0)
        {
            cout << c << " ";
            c = c - a;
        }
        if (c < 0)
        {
            break;
        }
    }
    return 0;
}
