#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    char str[] = "codeforces";
    char new_str[11];

    while (t--)
    {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            cin >> new_str[i];
        }

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (new_str[i] != str[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}