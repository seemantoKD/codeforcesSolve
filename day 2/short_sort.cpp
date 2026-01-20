#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size()-1; i++)
    {
        for(int j = 1;j<s.size();j++)
        {
            if(s[i] > s[j])
            {
                s[i] = s[j];
            }
        }
    }

    cout<<s;
}