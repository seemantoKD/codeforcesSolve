#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int grp = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[i + 1])
        {
            grp++;
        }
    }

    cout << grp << endl;
    return 0;
}