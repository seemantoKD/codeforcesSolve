#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool found = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "NO\n";
    }

    else
    {
        cout << "YES\n";
    }
    return 0;
}

/*
-> + condition e deya hoyni cz + kuno output dey na just value increase kore
*/