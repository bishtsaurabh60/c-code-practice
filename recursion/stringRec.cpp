#include <iostream>
using namespace std;

bool pal(string a, int i, int e)
{
    if(i==e)
       return true;
    if(i>e)
       return true;
    if (a[i] != a[e])
        return false;
    return pal(a, i+1,e-1);
}

int main()
{
    string a = "mam";
    int i = 0;
    int e = a.length();
    cout << pal(a, i, e - 1);
    return 0;
}