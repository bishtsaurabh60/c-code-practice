// josephus Problem
/* Given n people in a circle, kill every kth person in each iteration and find the survivor */

#include<iostream>
using namespace std;

int kill(int n, int k){
    if(n==1)
     return n;

    return (kill(n-1,k)+k-1) % n+1;
}

int main(){
    int n = 5;
    int k = 2;

    cout<<kill(n,k);
return 0;
}