#include<iostream>
using namespace std;

int main(){

int n;
int i=1;
cin>>n;

    while(n!=0){
        n = n - i;
        if (n < 1)
        {
            cout << "Patlu";
            break;
    }

    n = n - i*2;

    if(n<1){
        cout<<"Motu";
        break;
    }

    i++;
  }

return 0;
}