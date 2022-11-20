#include<iostream>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
        int A = max(max(a, b),c);
        int B = min(min(a,b),c);

        if(c > B && c < A){
            cout << c << endl;
        }else if (a > B && a < A)
        {
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }
return 0;
}