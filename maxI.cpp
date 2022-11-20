// max till i

#include<iostream>
using namespace std;

void maxi(int arr[],  int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }

        cout << max<<" ";
    }
}


int main(){

    int arr[6] = {0, -9, 1, 3, -4 , 5};
    int n= 6;
    maxi(arr, n);
return 0;
}