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
        for (auto &x : v)
            cin >> x;

        int countneg = count(v.begin(), v.end(), -1);
        int count0 = count(v.begin(), v.end(), 0);

        cout << (countneg % 2 == 0 ? count0 : count0 + 2) << endl;
    }
    return 0;
}