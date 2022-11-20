// Longest Arithematic subarray
#include<iostream>
#include<math.h>
using namespace std;

void longest(int arr[], int n){
    int pd = arr[1] - arr[0];
    int curL = 2;
    int ansL =  2;
    int j = 2; 
        while(j<n){
        	int pd1 = arr[j] - arr[j-1];
        	if(pd == pd1){
        		curL++;
        	}else{
        		pd = pd1;
        		curL=2;
        	}
        	ansL = max(ansL, curL);
        	j++;
        }
    cout<<ansL;
}

int main(){
  int arr[7] = {10, 7, 4,6,8,10,11};
  int n = 7;
  longest(arr,n);
  return 0;
}