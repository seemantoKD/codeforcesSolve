#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());

    vector<int> v2;
    for (int i = 0; i < v.size(); i++)
    {
        if (find(v2.begin(), v2.end(), v[i]) == v2.end()) // v2 vector e v[i] kuje pay ni
        {
            v2.push_back(v[i]);
        }
    }

    reverse(v2.begin(), v2.end());

    cout << v2.size() << endl;
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

/*
learning -> vector er find function diye duplicate/unique operation
*/