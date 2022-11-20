#include<iostream>
using namespace std;

int main(){

    int t,n,m;
    cin>>t;

    while(t--){
        cin>>n>>m;

        (m%n==0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
        
    }
return 0;
}