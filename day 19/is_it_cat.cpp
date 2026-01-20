#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    string s;
    cin >> n >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    ll cm = count(s.begin(), s.end(), 'm');
    ll ce = count(s.begin(), s.end(), 'e');
    ll co = count(s.begin(), s.end(), 'o');
    ll cw = count(s.begin(), s.end(), 'w');

    if (cm == 0 || ce == 0 || co == 0 || cw == 0)
    {
        cout << "NO\n";
        return;
    }

    char ch = s.back();
    if (ch != 'm' && ch != 'e' && ch != 'o' && ch != 'w')
    {
        cout << "NO\n";
        return;
    }

    string s2 = "meow";
    ll j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[j])
            j++;
        if (j == s2.size())
            break;
    }
    if (j == s2.size())
        cout << "YES\n";
    else
        cout << "NO\n";
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