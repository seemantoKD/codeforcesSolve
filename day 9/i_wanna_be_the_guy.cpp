#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    vector<int> x(p);
    vector<int> result;
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
        if (find(result.begin(), result.end(), x[i]) == result.end())
        {
            result.push_back(x[i]);
        }
    }
    cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
        if (find(result.begin(), result.end(), y[i]) == result.end())
        {
            result.push_back(y[i]);
        }
    }

    if (result.size() == n)
    {
        cout << "I become the guy.\n";
    }

    else
    {
        cout << "Oh, my keyboard!\n";
    }

    return 0;
}