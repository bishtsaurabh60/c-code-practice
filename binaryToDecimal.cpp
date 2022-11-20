// Q binary To Decimal

#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n)
{
    int sum = 0;
    int a = 0;
    int i = 0;
    while (n > 0)
    {

        a = n % 10;
        sum += a * pow(2, i);
        n = n / 10;
        i++;
    }
    return sum;
}

int main()
{
    int a;
    cin >> a;
    int d = binaryToDecimal(a);
    cout << d << endl;
    return 0;
}