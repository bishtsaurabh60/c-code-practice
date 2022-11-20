#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int r = 0;
        while(num!=0){
            int a = num % 10;
            r = r * 10 + a;
            num /= 10;
        }
        cout<<r<<endl;
    }
return 0;
}