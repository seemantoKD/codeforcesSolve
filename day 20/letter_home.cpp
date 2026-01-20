/*
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll before = abs(s - v[0]);
    ll after = abs(v[n - 1] - s);

    ll mn = min(before, after);
    ll result = mn + abs(v[0] - v[n - 1]);
    cout << result << endl;
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
*/

// better approach
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll before = abs(s - v[0]);
    ll after = abs(v[n - 1] - s);

    if (s >= v[n - 1]) 
        cout << s - v[0] << endl;
    else if (s <= v[0])
        cout << v[n - 1] - s << endl;
    else
    {
        if (before > after)
            cout << 2 * after + before << endl;
        else
            cout << 2 * before + after << endl;
    }
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
