// Q decimal to binary
#include <iostream>
#include <math.h>
using namespace std;

int decimalToBin(int n){
	int i = 0;
	int a;
	int bin = 0;
	while(n != 0){
		a = n%2;
		int c = pow(10,i);
		bin += a * c;
		n/=2;
		i++;
	}
	return bin; 
}
int main()
{
	int b;
	cin>>b;
	int d = decimalToBin(b);
	cout<<d;
	return 0;
}