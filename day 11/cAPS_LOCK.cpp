#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string temp = s;
    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

    // case 1 -> sob capital hole
    if (s == temp)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }

    // case 2 -> prothom letter choto hole
    else if (s[0] >= 'a' && s[0] <= 'z')
    {
        string second;
        for (int i = 1; i < s.size(); i++)
        {
            second.push_back(s[i]);
        }

        string temp2 = second;
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::toupper);

        if (temp2 == second)
        {
            s[0] = toupper(s[0]);
            cout << s[0];
            transform(second.begin(), second.end(), second.begin(), ::tolower);
            cout << second << endl;
        }

        else
        {
            cout << s << endl;
        }
    }

    else
    {
        cout << s << endl;
    }
    return 0;
}