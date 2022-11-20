// Q Add Binary

// there will be 3 cases can occurs in this problem and both with will be traverse
// 1. if both digits are zero 0  then the prev carry will always be set to zero;
// 2. either can have 1 in this case;- if prev carry is 1 then the further carry always be 1, if not then
// the prev carry will be 0.

// 3. both digits are zero 1, then the prev carry will always be set to 1;

#include <iostream>
using namespace std;

int reverse(int ans){
    int r = 0;
    while(ans > 0){
        int a = ans%10;
        r = r * 10 + a;
        ans/=10;
    }
    return r;
}

int addBin(int a, int b)
{
    int ans = 0;
    int prevCar = 0;
    while (a > 0 && b > 0)
    {
        // case 1:-

        if (a % 2 == 0 && b % 2 == 0)
        {
                ans = ans * 10 + prevCar;
                prevCar = 0;
        }

        //case 2:-

       else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (prevCar == 1)
            {
                ans = ans * 10 + 0;
                prevCar = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCar = 0;
            }
        }

        //case 3:-
       else
        {
                ans = ans * 10 + prevCar;
                prevCar = 1;
        }

        //eliminate the last digit in every iteration
        a /= 10;
        b /= 10;
        }

        // if a has larger digits then b
        while (a > 0)
        {
            if (prevCar == 1)
            {

                if (a % 2 == 1)
                {
                    ans = ans * 10 + 0;
                    prevCar = 1;
                }
                else
                {
                    ans = ans * 10 + 1;
                    prevCar = 0;
                }
            }
            else
            {
                ans = ans * 10 + (a % 2);
            }
            a /= 10;
        }

        //if b has larger digits
        while (b > 0)
        {
            if (prevCar == 1)
            {

                if (b % 2 == 1)
                {
                    ans = ans * 10 + 0;
                    prevCar = 1;
                }
                else
                {
                    ans = ans * 10 + 1;
                    prevCar = 0;
                }
            }
            else
            {
                ans = ans * 10 + (b % 2);
            }
            b /= 10;
        }

        // if last carry is 1
        if(prevCar == 1){
            ans = ans * 10 + 1;
            prevCar = 0;
        }

        ans = reverse(ans);
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << addBin(a, b) << endl;
    return 0;
}