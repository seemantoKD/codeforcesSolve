#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n, m;
    cin >> n >> m;

    ll prev = 0; // kuthay achi
    ll l = 0;    // side or wall
    while (n--)
    {
        ll a, b;
        cin >> a >> b;

        ll d = a - prev;
        if (b - l == 0 and d & 1)
            m--;
        else if (b - l != 0 and !(d & 1))
            m--;
        prev = a;
        l = b;
    }
    cout << m << endl;
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