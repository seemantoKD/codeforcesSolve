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
        // if ((n & (n - 1)) == 0) // only even divisor er condition
        // {
        //     cout << "NO\n";
        // }

        // else
        // {
        //     cout << "YES\n";
        // }

        // case 1 -> n odd
        if (n % 2 == 1)
        {
            if (n > 1)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }

        // case 2 -> n even
        else
        {
            if (n % 2 == 0)
            {
                int flag = 0;
                for (long long i = 3; i * i <= n; i += 2)
                {
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1)
                {
                    cout << "YES\n";
                }

                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}

/*
we know :
-> kuno ekti songkhar odd divisor tokhon
e thake jokhon songkha ti 2 to the power something er soman na hoy.
*/