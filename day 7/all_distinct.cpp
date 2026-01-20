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

        vector<int> distinct;
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (find(distinct.begin(), distinct.end(), v[i]) == distinct.end())
            {
                count++;
                distinct.push_back(v[i]);
            }
        }

        int len = v.size();
        int size = distinct.size();
        if ((len - size) % 2 == 0)
        {
            cout << count << endl;
        }

        else
        {
            cout << count - 1 << endl;
        }
    }
    return 0;
}