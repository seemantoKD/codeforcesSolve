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
        vector<int> duplicate;

        int val = 0;
        int count = 0;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (v[val] == v[i])
            {
                count++;
                if (count == 3)
                {
                    v2.push_back(v[i]);
                    break;
                }
            }

            else
            {
                val++;
            }
        }

        if (count == 3)
        {
            cout << v2[0] << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}