#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    cout << count(s.begin(), s.end(), '1') << endl;
    for (ll i = 0; i < n; i++)
        if (s[i] == '1')
            cout << i + 1 << ' ';
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