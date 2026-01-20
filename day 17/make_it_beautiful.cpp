#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int c = count(v.begin(), v.end(), v[0]);
        if (c == n)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());

        int pos, p2;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
            {
                pos = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] == mn)
            {
                p2 = i;
                break;
            }
        }

        if (v[0] != mx)
        {
            swap(v[0], v[pos]);
        }

        if (v[1] != mn)
        {
            swap(v[1], v[p2]);
        }

        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}