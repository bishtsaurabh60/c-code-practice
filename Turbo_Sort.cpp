#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n,i = 0;
    cin>>t;
    int arr[t];

    int s = sizeof arr / sizeof *arr;
    while(t--){
        cin>>n;
        arr[i] = n;
        i++;
    }
    sort(arr, arr + s);
    for(int i = 0; i<s;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}