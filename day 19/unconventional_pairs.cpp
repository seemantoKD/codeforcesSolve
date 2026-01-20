#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> result;
        for (auto &x : v)
            cin >> x;

        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1;)
        {
            int ans = abs(v[i + 1] - v[i]);
            result.push_back(ans);
            i += 2;
        }
        int mx = *max_element(result.begin(), result.end());
        cout << mx << endl;
    }
    return 0;
}