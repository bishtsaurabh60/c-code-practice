#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int d,r,x;
    int toffee = 0;

    cin>>d;

    while(d--){
        cin>>r>>x;
        int y = x*100;

        if(y >= 2*(22.0/7)*r)
          toffee++;
    }

    cout<<toffee<<endl;

return 0;
}