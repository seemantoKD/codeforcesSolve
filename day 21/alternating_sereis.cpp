#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            v[i] = -1;
        else
        {
            // this approach from test case after getting wa
            if (i == n - 1)
                v[i] = 2;
            else
                v[i] = 3;
        }
    }

    for (auto val : v)
        cout << val << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        seemanto();
    return 0;
}