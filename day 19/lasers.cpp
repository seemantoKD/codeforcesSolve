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
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<int> a(n);
        vector<int> b(m);

        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        cout<<n+m<<endl;
    }
    return 0;
}