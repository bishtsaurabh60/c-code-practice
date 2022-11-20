#include<iostream>
#include<sstream>
using namespace std;

int main(){
 int t;
 cin>>t;

 while(t--){
     int d0, d1;
     long long int k;
     cin>>k>>d0>>d1;;
     long long int temp = d0 + d1;
     long long int ans = temp;
     long long int sum = (2 * temp) % 10 + (4 * temp) % 10 + (8 * temp) % 10 + (6 * temp) % 10;

     k = k - 2;
     if (k > 0)
     {
         ans += (temp % 10);
         k--;
     }
     ans += (k / 4) * sum;
     k %= 4;
     int p=2;
     while(k--){
        ans += (p*temp)%10;
         p=(p*2)%10;
     }

     if(ans%3==0){
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
     
 }
return 0;
}