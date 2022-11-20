#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    double y;
    cin >> x >> y;
    double remBal = y;

    if(x % 5 == 0 && x + 0.50 <= remBal){
        remBal = y - x - (0.5); 
    }

    cout<<fixed<<setprecision(2)<<remBal;

return 0;
} 