#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        int n;
        cin>>n;
        while(n > 0){
            int a = n%10;
            sum += a;
            n /=10;
        }

        cout<<sum<<endl;
    }
return 0;
}