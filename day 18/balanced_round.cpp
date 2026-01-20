#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        sort(v.begin(), v.end());

        int c = 1;
        int ans = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] <= k)
            {
                c++;
                if (c > ans)
                    ans = c;
            }

            else
                c = 1;
        }
        cout << n - ans << endl;
    }
    return 0;
}

/*
    learning :
        1. find largest subarray where for all consecutive pairs difference<=k
*/