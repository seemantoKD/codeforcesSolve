#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll press[3][3];
    ll ans[3][3];

    // memset(primary, 1, sizeof(primary));

    for (ll i = 0; i < 3; i++)
        for (ll j = 0; j < 3; j++)
            cin >> press[i][j];

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            int count = press[i][j];

            // u d l r count
            if (i > 0)
                count += press[i - 1][j]; // up
            if (i < 2)
                count += press[i + 1][j]; // down
            if (j > 0)
                count += press[i][j - 1]; // left
            if (j < 2)
                count += press[i][j + 1]; // right

            if (count % 2 == 0)
                ans[i][j] = 1;
            else
                ans[i][j] = 0;
        }
    }

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
            cout << ans[i][j];
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
        seemanto();
    return 0;
}