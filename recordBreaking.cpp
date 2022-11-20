#include<iostream>
using namespace std;

int breakingDay(int arr[], int n){
    int maxi = INT_MIN;
    int ans = 0;

    for(int i = 0;i<n;i++){
        if(arr[i]>maxi && arr[i]>arr[i+1])
        {
            ans++;
        }
        maxi = max(arr[i],maxi);
    }
    return ans;
}

int main(){
    int n = 8;
    int arr[n] = {1,2,0,7,2,0,2,2};

    cout<<breakingDay(arr,n);
return 0;
}