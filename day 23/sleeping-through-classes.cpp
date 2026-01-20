#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;
#define ff(i, a, b) for (int i = a; i < b; i++)
#define basic                   \
    int n;                      \
    cin >> n;                   \
    int a[n];                   \
    for (int i = 0; i < n; i++) \
    cin >> a[i]

void seemanto()
{
    ll n, k;
    string s;
    cin >> n >> k >> s;

    ll skip = 0, ans = 0;
    ff(i, 0, n)
    {
        if (s[i] == '1')
            skip = k;
        else
        {
            if (skip == 0)
                ans++;
            else
                skip -= 1;
        }
    }
    cout << ans << endl;
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