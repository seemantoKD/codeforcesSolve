#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long int

int32_t main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> odd;

        int r = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 1)
                odd.push_back(v[i]);
            else
                r += v[i];
        }

        // case 1
        if (odd.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(odd.begin(), odd.end());
        vector<int> ans(odd.size());
        int small = 0;
        int large = odd.size() - 1;
        for (int i = 0; i < odd.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = odd[large--];
                r += ans[i];
            }
            else
                ans[i] = odd[small++];
        }
        cout << r << endl;
    }
    return 0;
}

/*
    learning :
        -> vector er even index a largest element and odd index a smallest
            element set kora
*/