#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    vector<int> NEW(n + 1);
    for (int i = 0; i < v.size(); i++)
    {
        NEW[v[i]] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << NEW[i] << " ";
    }
    cout << endl;
}