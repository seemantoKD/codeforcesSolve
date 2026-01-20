#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        vector<int> v;
        for (int i = 0; i < str.size(); i++)
        {
            int num = str[i] - '0'; // char to digit
            v.push_back(num);       // every digit insert to vector
        }

        // int result1 = v[0] + v[1] + v[2];
        // int result2 = v[3] + v[4] + v[5];

        int result1 = accumulate(v.begin(), v.begin() + 3, 0);
        int result2 = accumulate(v.begin() + 3, v.end(), 0);

        if (result1 == result2)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}

/*
learning :
1. character to digit
2. vector er accumulate function er usses
*/