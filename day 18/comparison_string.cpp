#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v;
        int g = 0, l = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // '>' এর জন্য
            if (s[i] == '>')
                g++;
            else
            {
                if (g > 0)
                    v.push_back(g + 1);
                g = 0;
            }

            // '<' এর জন্য
            if (s[i] == '<')
                l++;
            else
            {
                if (l > 0)
                    v.push_back(l + 1);
                l = 0;
            }
        }

        // শেষের জন্য
        if (g > 0)
            v.push_back(g + 1);
        if (l > 0)
            v.push_back(l + 1);

        int ans = *max_element(v.begin(), v.end());
        cout << ans << endl;
    }
    return 0;
}
