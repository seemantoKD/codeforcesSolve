#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string s2 = "hello";
    int count = 0;
    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s2[j])
        {
            count++;
            j++;
        }

        if (count == s2.size())
        {
            break;
        }
    }

    if (count == s2.size())
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }

    return 0;
}

/*
learning ->
. string er modde kuno nirdisto sobdo (jemon : hello) sirially ache kina check.
. character ektar por ekta ache ki na check but pase thaka lage na .
*/