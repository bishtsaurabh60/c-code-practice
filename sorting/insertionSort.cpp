#include<iostream>
using namespace std;

void print(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int *insertion(int ar[], int n){

    for(int i = 1;i < n;i++){
        int temp = ar[i];
        int j = i;
        while (j > 0 && temp < ar[j - 1])
        {
            ar[j] = ar[j-1];
            j--;
        }
        ar[j] = temp;
    }

    return ar;
}

int main(){
    int n = 6;
    int arr[n] = {12, 45, 23, 51, 19, 8};
    print(arr,n);

    int *ar = insertion(arr, n);

    print(ar,n);

    return 0;
}