#include<iostream>
using namespace std;

int main(){

    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        int cap = 0;
        int sm = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] >= 97 && s[i] <= 122){
                sm++;
            }
            if(s[i] >= 65 && s[i] <= 90){
                cap++;
            }
        }

        if(cap == sm){
            if(k>=cap){
                cout<<"both"<<endl;                
            }else if (k < cap)
            {
                cout<<"none"<<endl;
            }
        }
        else if (cap > sm){
            if (k >= cap)
            {
                cout << "both" << endl;
            }
            else if(k < sm)
            {
                cout << "none" << endl;
            }else{
                cout<<"brother"<<endl;
            }
        }

        else if (sm > cap)
        {
            if (k >= sm)
            {
                cout << "both" << endl;
            }
            else if (k < cap)
            {
                cout << "none" << endl;
            }
            else
            {
                cout << "chef" << endl;
            }
        }
    }
return 0;
}