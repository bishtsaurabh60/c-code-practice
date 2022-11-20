#include<iostream>
using namespace std;

int main(){
    int t,k,n,count = 0;
    cin>>t>>k;
    while(t--){
        cin>>n;
        if(n%k==0){
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}