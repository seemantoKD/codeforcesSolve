#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '+')
            {
                int num = s[i] - '0';
                v.push_back(num);
            }
        }

        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
    return 0;
}