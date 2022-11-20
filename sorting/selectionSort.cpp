#include <iostream>
using namespace std;

int *selection(int arr[],int n){
    for(int i = 0;i < n-1;i++){
        int min = i;
        for(int j = i + 1;j<n;j++){
            if(arr[j] < arr[min]){
               min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    return arr;
}

int main(){
    int arr[5] = {23,12,9,14,34};
    int n =  sizeof arr/sizeof *arr;
    int *ar = selection(arr, n);
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
return 0;
}