// move zero's to the end

#include <iostream>

using namespace std;
// return type is pointer in c++ eg= int *function name but int[] in java
int *move(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }

    return arr;
}

int main()
{
    int arr[] = {80, 0, 89, 0, 5, 0, 10, 0, 20};
    int n = sizeof arr / sizeof *arr;
    int *ar = move(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << ", ";
    }
    return 0;
}