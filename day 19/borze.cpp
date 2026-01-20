#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    string s;
    cin >> s;

    char ch = '.';
    string s1 = "-.";
    string s2 = "--";

    for (int i = 0; i < s.size();)
    {
        if (s[i] == ch)
        {
            cout << 0;
            i++;
        }

        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i += 2;
        }

        else
        {
            cout << 2;
            i += 2;
        }
    }
    cout << endl;
    return 0;
}