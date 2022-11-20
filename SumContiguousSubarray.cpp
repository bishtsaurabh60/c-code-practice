#include<iostream>
using namespace std;

int maxSum(int arr[],int n){
    int curSum = 0;
    int max = INT_MIN;

    for(int i = 0;i < n;i++){
        curSum = curSum + arr[i];

        if(curSum > max){
            max = curSum;
        }
        
        if(curSum < 0){
            curSum = 0;
        }
    }

    return max;
}

int main(){

    int arr[] = {-2,-13,-12,-6,-3};
    int n = sizeof arr/sizeof *arr;

    cout<<maxSum(arr,n);
return 0;
}