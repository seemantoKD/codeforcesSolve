#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    vector<int> distinct;
    for (int i = 0; i < 4; i++)
    {
        if (find(distinct.begin(), distinct.end(), v[i]) == distinct.end())
        {
            distinct.push_back(v[i]);
        }
    }
    cout << 4 - distinct.size() << endl;
    return 0;
}