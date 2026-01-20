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
        vector<int> v(n);

        for (auto &x : v)
            cin >> x;

        int c2 = count(v.begin(), v.end(), 2);
        int target = c2 / 2;

        if (c2 == 0)
        {
            cout << 1 << endl;
            continue;
        }

        if (c2 != 0 && (c2 % 2 == 1))
        {
            cout << -1 << endl;
            continue;
        }

        int idx = 0, pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
                idx++;
            if (idx == target)
            {
                pos = i + 1;
                break;
            }
        }
        cout << pos << endl;
    }
    return 0;
}


/*
    learning :
        -> kun position e gele till oi position porjonto kunu ekta value er frequency 
            and oi index er por theke shes obdhi oi specific value er frequency same hobe.
*/