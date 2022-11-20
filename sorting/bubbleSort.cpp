// bubbleSort

#include<iostream>
using namespace std;

void print(int arr[], int n); 

int *bubbleSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        bool flag = false;
        for(int j = 0; j < n-i-1; j++){

            if(arr[j] > arr[j+1]){
            int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
             flag = true;
            }
        }

        if(!flag)
          break;
    }
    return arr;
}

void print(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {12,45,23,51,19,8};
    int n = sizeof arr/sizeof *arr;
    print(arr,n);
    int *ar = bubbleSort(arr, n);
    print(ar,n);
return 0;
}