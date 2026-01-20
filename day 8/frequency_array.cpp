#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i] << endl;
    }
    return 0;
}
