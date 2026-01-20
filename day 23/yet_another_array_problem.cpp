#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    for (ll x = 2; x <= 10000000000; x++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (__gcd(v[i], x) == 1)
            {
                cout << x << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while (t--)
        seemanto();
    return 0;
}