#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        int count = 0;
        vector<int> v;
        cin >> n;
        for (int i = 1; count < n; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                v.push_back(i);
                count++;
            }
        }
        cout << v[n - 1] << endl;
    }

    return 0;
}