#include<iostream>
using namespace std;

int fact(int n, int k = 1){
    if(n==0)
     return k;
    return fact(n-1, n*k);
}

int main(){
    int n = 5;
    cout<<fact(n)<<endl;

    return 0;
}