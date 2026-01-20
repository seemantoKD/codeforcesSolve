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

    ll pos1 = -2, pos2 = -2, pos3 = -2;
    for (ll i = 0; i < n - 2; i++)
    {
        if (v[i] < v[i + 1] && v[i+1] > v[i + 2])
        {
            pos1 = i +1;
            pos2 = i+2;
            pos3 = i + 3;
            break;
        }
    }

    if (pos1 != -2 && pos2 != -2 && pos3 != -2)
    {
        cout << "YES\n";
        cout << pos1 << ' ' << pos2 << ' ' << pos3 << endl;
    }
    else
        cout << "NO\n";
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