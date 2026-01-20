#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 1; i++)
        {
            int result = abs(v[i] - v[i + 1]);
            if (result <= 1)
            {
                v.erase(v.begin() + i);
                i--;
            }
        }
        if (v.size() == 1)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}