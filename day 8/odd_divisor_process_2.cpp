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

        // case 1 -> n odd
        if (n % 2 == 1 && n > 1)
        {
            cout << "YES\n";
        }

        // case 2 -> n even
        else
        {
            // for (long long i = 3; i * i <= n; i += 2)
            // {
            //     if (n % i == 0)
            //     {
            //         flag = 1;
            //         break;
            //     }
            // }

            // if (flag == 1)
            // {
            //     cout << "YES\n";
            // }
            // else
            // {
            //     cout << "NO\n";
            // }
            if ((n & (n - 1)) == 0)//even
            {
                cout << "NO\n";
            }

            else // odd
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}