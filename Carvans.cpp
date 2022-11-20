#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int n, carSpeed, maxSpeed;
    int car;
    while(t--){
        cin>>n;
        car = 1;
        cin>>maxSpeed;
        while(--n){
            cin>>carSpeed;
            if(carSpeed <= maxSpeed){
                maxSpeed = carSpeed;
                car++;
            }
        }
        cout<<car<<endl;
    }
return 0;
}
