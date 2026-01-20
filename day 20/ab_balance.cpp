#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;
    ll n = s.size();

    // transform(s.begin(), s.end(), s.begin(), ::tolower);

    ll ab = 0;
    ll ba = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            ab++;
        if (s[i] == 'b' && s[i + 1] == 'a')
            ba++;
    }

    if (ab == ba)
    {
        cout << s << endl;
        return;
    }
    if (s[n - 1] == 'a')
        s[n - 1] = 'b';

    else if (s[n - 1] == 'b')
        s[n - 1] = 'a';

    cout << s << endl;
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

/*
    learning :
    :::: ekti string er element jodi just duita element hoy like a or b tahole
        string er moddhe ---
        -> AB != BA hole last character change korlei balance hoye jay
            and etai minimum operation kore kora psbl.
*/