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

        long long product = 1;

        sort(v.begin(), v.end());
        v[0] = v[0] + 1;

        for (int i = 0; i < n; i++)
        {
            product = product * v[i];
        }

        cout << product << endl;
    }
    return 0;
}