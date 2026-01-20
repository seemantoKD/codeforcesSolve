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
        for (auto &x : v)
            cin >> x;

        for (int i = 0; i < n - 1; i++)
            if (v[i] == 1)
                v[i]++;

        for (int i = 0; i < n - 1; i++)
            if (v[i + 1] % v[i] == 0)
                v[i + 1] ++;

        for (auto val : v)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
