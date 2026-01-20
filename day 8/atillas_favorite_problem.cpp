#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                int val = s[i] - 'a' + 1;
                if (val > count)
                {
                    count = val;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}

/*
learning :
string er character er upre depend kore string er maximum capacity daron kora
jemon string er ekti character a hole capacity 1
b hole 2
c hole 3
............z hole 26
*/