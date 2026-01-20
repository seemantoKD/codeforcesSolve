#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string distinct;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (find(distinct.begin(), distinct.end(), s[i]) == distinct.end())
            {
                distinct.push_back(s[i]);
            }
        }
    }

    cout << distinct.size() << endl;
    return 0;
}