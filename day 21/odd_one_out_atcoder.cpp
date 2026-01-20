#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;
    ll n = s.size();
    sort(s.begin(), s.end());
    ll c1 = count(s.begin(), s.end(), s[0]);
    ll c2 = count(s.begin(), s.end(), s[n - 1]);

    if (c1 == 1)
        cout << s[0] << endl;
    else if(c2 == 1)
        cout << s[n - 1] << endl;
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