#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long arr[17] = {
        2050LL,
        20500LL,
        205000LL,
        2050000LL,
        20500000LL,
        205000000LL,
        2050000000LL,
        20500000000LL,
        205000000000LL,
        2050000000000LL,
        20500000000000LL,
        205000000000000LL,
        2050000000000000LL,
        20500000000000000LL,
        205000000000000000LL,
        2050000000000000000LL,
        20500000000000000000LL
    };

    long long n;
    while (t--)
    {
        cin >> n;

        if (n % 2050 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int flag = 0;
        for (int i = 0; i < 17; i++)
        {
            if (n == arr[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << 1 << endl;
        }

        else
        {
            long long max_val = -1;
            for (int i = 0; i < 17; i++)
            {
                if (arr[i] <= n)
                {
                    max_val = arr[i];
                }
            }

            long long rem = n - max_val;
            long long count = 0;
            for (int i = 16; i >= 0; i--)
            {
                while (rem >= arr[i])
                {
                    rem -= arr[i];
                    count++;
                }
            }
            cout << count + 1 << endl;
        }
    }
    return 0;
}