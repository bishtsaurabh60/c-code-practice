// tower of hanoi

#include <iostream>
using namespace std;

void toh(int n, char s, char au, char d){
    if(n==1){
        cout<<" move 1 from "<<s<<" to "<<d<<endl;
        return;
    }

    toh(n-1,s ,d , au);
    cout<<" move "<<n<<" from "<<s<<" to "<<d<<endl;
    toh(n - 1, au, s, d);
}

int main()
{
    int disk = 3;
    toh(disk, 'a', 'b', 'c');
    return 0;
}