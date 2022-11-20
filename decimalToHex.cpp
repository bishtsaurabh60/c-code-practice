// decimal To Hexadecimal

#include <iostream>
#include <math.h>
    using namespace std;

void decimalToHex(int n)
{
    int r = 0;
    char a[100];
    int i = 1;
    while (n != 0)
    {
       r = n % 16;
      if(r < 10){
          a[i] = r + 48;
          i++;
      }else{
          a[i] = r + 55;
          i++;
      }
      n /= 16;
    }
    for (int j = i-1; j > 0; j--)
    {
        cout << a[j];
    }
}

int main()
{
    int a;
    cin >> a;
   decimalToHex(a);
    
    return 0;
}