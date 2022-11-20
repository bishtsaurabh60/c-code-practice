#include<iostream>
#include<string>
using namespace std;

int main(){

    int t,count;
    string n;
    cin>>t;

    while(t--){
        cin>>n;
        count = 0;
        int l = n.size(); 
        for(int i = 0;i<l;i++){
            if(n[i] == '4'){
                count++;
            }
        }
        cout<<count<<"\n";
    }

return 0;
}