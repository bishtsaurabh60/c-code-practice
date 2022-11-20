#include<iostream>
using namespace std;

int main(){

    int t;
    int n;
    cin>>t;

    while (t--)
    {
        cin>>n;

        for(int i = 1 ; i<=n;i++){
            for(int j = 1; j <= n;j++){
                if(j<=i){
                cout<<"*";
                }else{
                    cout<<"#";
                }
            }
    
        for (int j = 1; j <= n; j++)
        {
            if (j <= n-i)
            {
                cout << "#";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout<<endl;
    }
    
return 0;
}