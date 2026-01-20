#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll q;
    cin >> q;

    map<string, string> mp1, mp2;
    while (q--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (mp2.find(s1) != mp2.end())
        {
            string s = mp2[s1];
            mp1[s] = s2;
            mp2.erase(s1);
            mp2[s2] = s;
        }

        else
        {
            mp1[s1] = s2;
            mp2[s2] = s1;
        }
    }
    cout << mp2.size() << endl;
    for (auto p : mp2)
        cout << p.second << ' ' << p.first << endl;
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