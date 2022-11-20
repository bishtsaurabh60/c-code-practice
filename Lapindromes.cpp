#include<iostream>

using namespace std;

const int maxChar = 26;

bool lapin(string s){
    int n = s.length();
    int count[maxChar] = {0};

    if(n == 1){
        return true;
    }

    for(int i=0,j=n-1; i<j; i++,j--){
        count[s[i] - 'a']++;
        count[s[j] - 'a']--; 
    }

    for(int i = 0; i < maxChar;i++){
        if(count[i] != 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string lap;
        cin>>lap;
        if(lapin(lap)){
            cout<<"YES\n";
        }else
        {
            cout<< "NO\n";
        }  
    }
return 0;
}