#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    long long n, k;
    while (t--)
    {
        cin >> n >> k;
        long long min_sum = k * k;

        if ((n < min_sum) || ((n % 2) != (k % 2)))
        {
            cout << "NO\n";
        }

        else
        {
            // cout << "YES\n";
            for (int i = 1; i < k; i++)
            {
                cout << i << " ";
                n -= i;
            }
            cout << n << endl;
        }
    }
    return 0;
}

/*
    -> kuno ekti even/odd numberke tokhon e k ti
    even/odd number diye prokas kora jabe jokhon
        . n -> even , k->even
        . n->odd , k->odd
*/