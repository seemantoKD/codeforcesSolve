#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;

    ll count = 0;
    for (ll i = 0; i < s.size()-1; i++)
        if (s[i] == s[i + 1])
            count++;
    count == 0 ? cout << s.size() << endl : cout << 1 << endl;
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