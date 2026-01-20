#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;

    while (t--)
    {
        vector<int> v;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            int digit = s[i] - '0';
            v.push_back(digit);
        }

        int flag = 1;
        for (int i : v)
        {
            if (v.size() == 1)
            {
                flag = 1;
                break;
            }

            else if (v[i] != v[0])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Round Number\n";
        }

        else
        {
            cout << "Not round\n";
        }
    }
    return 0;
}