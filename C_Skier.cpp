#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        int sum = 5;
        for(int i = 1;i<n.length();i++){
            if ((n[i] == 'N' && n[i - 1] == 'S') || (n[i] == 'S' && n[i - 1] == 'N'))
            {
                sum += 1;
            }
            if ((n[i] == 'E' && n[i - 1] == 'W') || (n[i] == 'W' && n[i - 1] == 'E'))
            {
                sum += 1;
            }
            if ((n[i] == 'N' && n[i - 1] != 'S') || (n[i] == 'E' && n[i - 1] != 'W') || (n[i] == 'S' && n[i - 1] != 'N') || (n[i] == 'W' && n[i - 1] != 'E'))
            {
                sum+=5;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}