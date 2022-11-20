// Q find the largest element in the given array?

#include <iostream>

using namespace std;
void findIndex(int arr[], int n)
{
    int maxI = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxI])
        {
            maxI = i;
        }
    }
    cout << maxI << " is the Index which contains The largest element";
}
int main()
{
    int arr[] = {4, 13, 53, 8, 12};
    int n = sizeof arr / sizeof *arr;
    findIndex(arr, n);
    return 0;
}
