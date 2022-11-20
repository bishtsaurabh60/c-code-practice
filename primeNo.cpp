// Prime No

#include <iostream>
#include <math.h>

using namespace std;
void prime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " is Prime" << endl;
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter the Range:- ";
    cin >> a >> b;
    prime(a, b);
    return 0;
}
