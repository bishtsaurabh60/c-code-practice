#include<iostream>
using namespace std;

void rec(int num){
    if(num<1){
        return;
    }
    cout<<num<<endl;
    rec(num - 1);
}

void rec1(int num){
    if(num < 1)
      return;
     rec1(num-1);
     cout<<num<<endl; 
}

// tail recursive function means `the recursive call
// is the last thing is to be happens in the function. 
// tail recursive functions always faster than normal
// recursive function
void recTail(int num,int k=1){
    if(num<1)
      return;
    cout<<k<<endl;
    recTail(num-1,k+1);
}
int main(){
    int n = 5;
    rec(n);
    cout<<"\n";
    rec1(n);
    cout <<"\n";
    recTail(n);
    return 0;
}
