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

    ll c = 1;
    ll mx = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i + 1] >= v[i])
        {
            c++;
            mx = max(c, mx);
        }
        else
            c = 1;
    }

    cout << mx << endl;
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

/*
    learning : 
        1. specific ekta pattern (hoite pare continiously dot , hoite pare increasing largest length)
            j pattern longest ta ber kora .
*/