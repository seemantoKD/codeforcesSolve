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

    ll op = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1])
        {
            v[i] /= 2;
            op++;
            if (v[i] == 0)
                break;
        }

        if (v[i] == 0 && v[i + 1] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << op << endl;
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