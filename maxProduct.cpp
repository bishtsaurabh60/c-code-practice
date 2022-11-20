// maximum product
#include <iostream>
using namespace std;

int maxP(int arr[], int n)
{
    int max = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            continue;
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    int pro = max * max2;
    return pro;
}

int main()
{
    int arr[] = {4, 1, 17, 46, 10};
    int n = sizeof arr / sizeof *arr;

    int p = maxP(arr, n);
    cout << "Product is  = " << p;
    return 0;
}