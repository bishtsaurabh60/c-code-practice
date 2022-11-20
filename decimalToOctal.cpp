// Decimal to octal

#include<iostream>
#include<math.h>
using namespace std;

int decimalToOctal(int n){
    int r = 0;
    int a;
    int i = 0;
    while(n!=0){
        a=n%8;
        int oct = pow(10,i);
        r += a * oct;
        n/=8;
        i++;
    }
    return r;
}

int main(){
    int a;
cin>>a;
int o = decimalToOctal(a);
cout<<o;
return 0;
}