// sieve of eratosthenes
#include<iostream>
using namespace std;

const int A = 20;

bool *isPrime(){
    static bool prime[A+1];
    int a = sizeof prime/sizeof *prime;

    for(int i = 0;i<=a;i++){
        prime[i] = true;
    }

    prime[0] = false;
    prime[1] = false;

    for(int i = 2;i*i <= a;i++){
        for(int j=2*i;j<=a;j+=i){
            prime[j] = false;
        }
    }

    return prime;
}

int main(){

    bool *arr = isPrime();

    for(int i = 2;i<=A;i++){
        if(arr[i])
        cout<<i<<" = "<<arr[i]<<endl;
    }
return 0;
}