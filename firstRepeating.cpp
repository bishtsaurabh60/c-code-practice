// first repeating element
#include<iostream>
using namespace std;

void repeatEle(int ar[], int n){
    int minIn = INT_MAX;
    int idx[n] = {-1,-1,-1,-1,-1,-1,-1}; 
    for(int i = 0;i < n;i++){
        if(idx[ar[i]] != -1){
            minIn = min(minIn,idx[ar[i]]);
        }else
           idx[ar[i]] = i;
    }

    if(minIn == INT_MAX){
        minIn = -1;
    }
    cout<<minIn;
}

int main(){
    int n = 7;
    int ar[n] = {1,5,3,4,3,5,6};
    repeatEle(ar,n);
    return 0;
}