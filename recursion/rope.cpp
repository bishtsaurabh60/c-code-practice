#include<iostream>
using namespace std;

int ropeT(int n, int a, int b,int c){
    if(n==0) return 0;
    if(n < 0) return -1;

    int res = max(ropeT(n-a, a, b, c), ropeT(n-b, a, b, c));

    int res2 = max(res, ropeT(n - c, a, b, c));if (res2 == -1) return -1;
    return res2 + 1;
}


int main(){
    int r = 7;
    int a = 3, b= 2, c = 5;

    cout<<ropeT(r, a, b, c)<<endl;
return 0;
}