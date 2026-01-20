#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            int digit = s[i] - '0';
            v.push_back(digit);
        }
    }

    // sort vector
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
        {
            cout << v[i];
            cout << "+";
        }

        else
        {
            cout << v[i];
        }
    }
    cout << endl;

    return 0;
}