#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    vector<int> v;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            v.push_back(0);
        }

        else
        {
            v.push_back(1);
        }
    }

    for (int val : v)
    {
        cout << val;
    }
    cout << endl;
    return 0;
}