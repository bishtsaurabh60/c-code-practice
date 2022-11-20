#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, a1, a2, b1,b2;
    cin>>t;

    while(t--){
        cin>>a1>>a2;
        cin>>b1>>b2;

       int max1 = max(a1,a2);
       int max2 = max(b2,b1);
       int min1 = min(a1,a2);
       int min2 = min(b1,b2);

        if(max1==max2){
            if(max1==min1+min2)
            cout<<"Yes"<<"\n";
            else{
                cout << "No"
                     << "\n";
            }
        }
        else{
            cout<<"No"<<"\n";
        }
    }
return 0;
}