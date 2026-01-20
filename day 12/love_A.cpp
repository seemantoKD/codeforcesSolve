#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int counta = 0;
    int countanother = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            counta++;
        }

        else
        {
            countanother++;
        }
    }

    int condition = s.size() / 2;

    // case - 1
    if (counta > condition)
    {
        cout << s.size() << endl;
    }

    // case 2
    else if (counta == condition)
    {
        int ans = 2 * counta - 1; // here 2*counta == size
        cout << ans << endl;
    }

    // case 3
    else
    {
        int result1 = countanother - counta + 1;
        int answer = s.size() - result1;
        cout << answer << endl;
    }
    return 0;
}
