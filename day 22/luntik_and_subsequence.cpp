#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    ll c0 = count(v.begin(), v.end(), 0);
    ll c1 = count(v.begin(), v.end(), 1);

    // ll ans = 1;
    // for (ll i = 0; i < c0; i++)
    //     ans *= 2; // ans = pow(2,c0); bcz : 0 has 2 option , 1. rakhbo , 2. rakhbo na
    // cout << c1 * ans << endl;
    ll x = 2;
    ll ans = pow(x, c0);
    cout << ans * c1 << endl;
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