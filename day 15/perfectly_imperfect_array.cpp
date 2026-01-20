#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int root = sqrt(v[i]);
            if ((root * root) != v[i])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }

        // long long product = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     product *= v[i];
        // }

        // long long product = accumulate(v.begin(), v.end(), 1LL, multiplies<long long>());
        // long long root = sqrt(product);

        // if ((root * root) == product)
        // {
        //     cout << "NO\n";
        // }

        // else
        // {
        //     cout << "YES\n";
        // }
    }
    return 0;
}

/*
learning :
    ->vector er sokol element er gunfol ber kora
    ->kuno ekti number square ki na ta ber kora
*/