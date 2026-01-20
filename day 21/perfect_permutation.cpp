// problem : pos != val and duibar kaj korle same permutation pawa jabe
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> v;
    if (n & 1)
        cout << -1 << endl;
    else
    {
        for (ll i = 1; i <= n; i++)
            v.push_back(i);

        for (ll i = 0; i < n - 1; i += 2)
        {
            ll temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
        for (auto val : v)
            cout << val << ' ';
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