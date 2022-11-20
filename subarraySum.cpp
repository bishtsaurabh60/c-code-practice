// find sub array which sum is present in the array
#include<iostream>
using namespace std;

void subArraySum(int a[], int n, int s){
    int st = 0;
    int ed;
    int cur = 0;
    
    for(ed = 0;ed < n;ed++){
        cur = cur + a[ed];
        while(cur > s && st < ed){
            cur -= a[st];
            st++;
        }

        if(cur == s){
            cout << st << " " << ed;
            return;
        }
    }
    cout << "No SubArray Found";
}

int main(){
    int n = 5;
    int a[5] = {1,2,3,8,7};
    int s = 5;
    subArraySum(a, n, s);
return 0;
}