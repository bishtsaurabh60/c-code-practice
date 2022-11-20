// sum of sub arrays
#include <iostream>
using namespace std;

void sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
             cout << sum << endl;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 0, 7, 2};
    int n = 5;
    sum(arr, n);
    return 0;
}