#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> cnt;

        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
            cnt[x]++;
        }

        auto it = cnt.begin();
        int n1 = it->first;
        int c1 = it->second;

        advance(it, 1);
        int n2 = it->first;
        int c2 = it->second;

        if (cnt.size() == 1)
            cout << "YES\n";
        else if (cnt.size() <= 2 && ((c1 == c2) || (abs(c1 - c2) <= 1)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

/*
    learning :
        -> advance stl diye map er element access
*/