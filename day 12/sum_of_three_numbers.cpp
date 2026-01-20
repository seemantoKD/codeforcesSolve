#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int flag = 0;

        for (long long a = 1; a <= n; a++)
        {
            if (a % 3 == 0)
            {
                continue;
            }

            for (long long b = a + 1; b <= n; b++)
            {
                if (b % 3 == 0)
                {
                    continue;
                }

                long long c = n - a - b;

                if (c > b && c % 3 != 0)
                {
                    cout << "YES" << endl;
                    cout << a << " " << b << " " << c << endl;
                    flag = 1;
                    break;
                }
            }

            if (flag == 1)
            {
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*
step for solving :
1. string input
2. convert string to int
3. find nth root using round and pow function
    -> long long root = (long long)round(pow((double)year, 1.0 / n));
    -> codeforcees e g++23 e submit korte hobe noyto error dibe

4. long long mul = 1
5. for (int i = 1; i <= 3; i++) // here 3 is a+b er power
    {
        mul = mul * root;
    }
6. condition chek
    if(mul != string s)
    {
        cout<<-1;
    }

    else
    {
        cout<<0<<" "<<root;
    }


    note !
    -> onek somoy ei type er code vs code e syntax error dekhay
    but baki sob online compiler e thik ase , even cf o accept kore.
*/

//ei code kivabe kaj kore ta kal bujbo