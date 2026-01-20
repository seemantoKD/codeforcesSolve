#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count = 0;
        vector<int> v;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    v.push_back(count);
                    count = 0;
                }
            }
        }

        if (count > 0)
        {
            v.push_back(count);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= 2)
            {
                v[i] = 2;
            }
        }

        int sum = accumulate(v.begin(), v.end(), 0);
        cout << sum << endl;
    }

    return 0;
}
