#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    long long int p = 1;
    long long int m = pow(10, 9);

    for (int i = 0; i < n; i++){
        cin>>ar[i];
    }

        for (int i = 0; i < n; i++)
        {
            p = (p * ar[i]) % (m + 7);
        }

    cout<<p<<endl;
return 0;
}