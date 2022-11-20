#include<iostream>
#include<math.h>
using namespace std;

void dig(int n){
    int f,l;

    l = n%10;
    f = (int)log10(n);
    f = (int)(n/pow(10,f));
    cout<<l+f<<"\n";
}

int main(){

    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        dig(n);
    }
return 0;
}