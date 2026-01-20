#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1;
    string s2;

    while (t--)
    {
        cin >> s1;
        cin >> s2;

        for (int i = 0; i < s1.size(); i++)
        {
            s1[i] = tolower(s1[i]);
        }

        for (int i = 0; i < s2.size(); i++)
        {
            s2[i] = tolower(s2[i]);
        }

        swap(s1[0], s2[0]);
        cout << s1 << " " << s2 << endl;
    }

    return 0;
}