#include<iostream>
using namespace std;

int main(){

    int t,a,b,c,d;
    cin>>t;

    while(t--){

        cin>>a>>b>>c>>d;

        if(a==0 && b==0 && c==0&&d==0){
            cout << "NO" << endl;
        }

        if(( a == b && c == d)|| (a == c && b == d) || (a == d && b == c))
            {
                cout << "YES" << endl;
            }
        else{
            cout << "NO" << endl;
        }
        
    }

return 0;
}