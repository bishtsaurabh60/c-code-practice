#include <iostream>
using namespace std;

int i, j, n = 5;

// Pattern 0
/*
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
 */
void pat0()
{
    cout << "Pattern 0\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << i + j - 1
                 << " ";
        }
        cout << endl;
    }
}

// pattern 1
/*
1234
1234
1234
1234 */

void pat1()
{
    cout << "Pattern 1\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

// Pattern 2
/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
 */
void pat2()
{
    cout << "Pattern 2\n";
    int a = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << a++ << " ";
        }
        cout << endl;
    }
}

// Pattern 3
/*
 *
 * *
 * * *
 * * * *
 */
void pat3()
{
    cout << "Pattern 3\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 4
/*
 1
2 2
3 3 3
4 4 4 4
 */
void pat4()
{
    cout << "Pattern 4\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 5
/*
1
2 3
4 5 6
7 8 9 10
 */
void pat5()
{
    int count = 1;
    cout << "Pattern 5\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count++
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 6
/*
1
2 3
3 4 5
4 5 6 7
*/
void pat6()
{
    cout << "Pattern 6\n";

    for (i = 1; i < n; i++)
    {
        // method 2 by using 3rd variable = int a = 1
        for (j = 1; j <= i; j++)
        {
            // cout<<a++<<" ";
            cout << i + j - 1
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 7
/*
1
2 1
3 2 1
4 3 2 1
 */
void pat7()
{

    cout << "Pattern 7\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i - j + 1
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 8
/*
A A A A
B B B B
C C C C
D D D D
 */
void pat8()
{
    cout << "Pattern 8\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << char('A' + i - 1)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 9
/*
A B C D
A B C D
A B C D
A B C D
 */
void pat9()
{
    cout << "Pattern 9\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << char('A' + j - 1)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 10
/*
A B C D
E F G H
I J K L
M N O P
 */
void pat10()
{
    cout << "Pattern 10\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << char(a++)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 11
/*
A B C D
B C D E
C D E F
D E F G
 */
void pat11()
{
    cout << "Pattern 11\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << char(a + i + j - 2)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 12
/*
A
B B
C C C
D D D D
 */
void pat12()
{
    cout << "Pattern 12\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(a + i - 1)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 13
/*
A
B C
D E F
G H I J
 */
void pat13()
{
    cout << "Pattern 13\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(a++)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 14
/*
A
B C
C D E
D E F G
 */
void pat14()
{
    cout << "Pattern 14\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(a + i + j - 2)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 15
/*
D
C D
B C D
A B C D
 */
void pat15()
{
    cout << "Pattern 15\n";
    char a = 'A';
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(a + n - i + j - 2)
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 16
/*
 *
 * *
 * * *
 * * * *
 */
void pat16()
{
    cout << "Pattern 16\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < n - i)
                cout << " "
                     << " ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 17
/*
 * * * *
 * * *
 * *
 *
 */
void pat17()
{
    cout << "Pattern 17\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 18
/*
 * * * *
 * * *
 * *
 *
 */
void pat18()
{
    cout << "Pattern 18\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < i)
                cout << " "
                     << " ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 19
/*
1 1 1 1
  2 2 2
    3 3
      4
*/
void pat19()
{
    cout << "Pattern 19\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < i)
                cout << " "
                     << " ";
            else
                cout << i
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 20
/*
      1
    2 2
  3 3 3
4 4 4 4
*/
void pat20()
{
    cout << "Pattern 20\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < n - i)
                cout << " "
                     << " ";
            else
                cout << i
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 21
/*
1 2 3 4
  2 3 4
    3 4
      4
*/
void pat21()
{
    cout << "Pattern 21\n";
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < i)
                cout << " "
                     << " ";
            else
                cout << j
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 22
/*
      1
    2 3
  4 5 6
7 8 9 10
*/
void pat22()
{
    cout << "Pattern 22\n";
    int count = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j < n - i)
                cout << " "
                     << " ";
            else
                cout << count++
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 23
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
void pat23()
{
    cout << "Pattern 23\n";
    for (i = 1; i < n; i++)
    {
        int a = 1;
        for (j = 1; j < n; j++)
        {
            if (j < n - i)
                cout << " "
                     << " ";
            else
                cout << a++
                     << " ";
        }

        for (int k = 1; k < i; k++)
        {
            cout << i - k
                 << " ";
        }
        cout << endl;
    }
}

// Pattern 24
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
void pat24()
{
    cout << "Pattern 24\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i + 1)
                cout << j
                     << " ";
            else
                cout << "*"
                     << " ";
        }

        for (int k = 1; k <= n; k++)
        {
            if (k > i - 1)
                cout << n - k + 1
                     << " ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
}

// Pattern 25
/*
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1
*/
void pat25()
{
    n = 7;
    cout << "Pattern 25\n";
    int mid = (n / 2) + 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || i == n || i == 1 || j == n)
            {
                cout << 1
                     << " ";
            }
            if (i == mid && j == mid)
            {
                cout << 3
                     << " ";
            }
            else if ((j != 1 && i != n) && i != 1 && j != n)
            {
                cout << 2
                     << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    pat0();
    pat1();
    pat2();
    pat3();
    pat4();
    pat5();
    pat6();
    pat7();
    pat8();
    pat9();
    pat10();
    pat11();
    pat12();
    pat13();
    pat14();
    pat15();
    pat16();
    pat17();
    pat18();
    pat19();
    pat20();
    pat21();
    pat22();
    pat23();
    pat24();
    pat25();
    return 0;
}