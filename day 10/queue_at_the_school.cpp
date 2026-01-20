#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    string temp = s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(temp[j], temp[j + 1]);
            }
        }
        s = temp;
    }
    cout << temp << endl;
    return 0;
}
