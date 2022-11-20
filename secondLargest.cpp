// second largest index
#include <iostream>

using namespace std;
int secLar(int arr[], int n)
{
    int res = -1;
    int lar = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[lar])
        {
            res = lar;
            lar = i;
        }
        else if (arr[i] != arr[lar])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {190, 200, 8, 200, 0, 200, -7, 78};
    // int arr[] = {78, 78, 78, 78, 78, 16};

    int n = sizeof arr / sizeof *arr;

    int l = secLar(arr, n);
    cout << l << "Is the second largest element index";
    return 0;
}