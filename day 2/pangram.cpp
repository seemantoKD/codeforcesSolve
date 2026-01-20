/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
    }

    if (n < 26)
    {
        cout << "NO\n";
        return 0;
    }

    else
    {
        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            for (char ch : s[i])
            {
                freq[ch - 'a']++;
            }
        }

        bool all_present = true;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
            {
                all_present = false;
                break;
            }
        }

        if (all_present == true)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
*/

/*
outcome :
1. ekti character koto bar ache string e ta count kora shikhlam
2. bool use kora shikhlam
3. usses of transform function(lower case to uppercase to lowercase)
4. character to index mapping


*/

// modify code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (n < 26)
    {
        cout << "NO\n";
    }

    else
    {
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            for (char ch : s)
            {
                freq[ch - 'a']++;
            }
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}