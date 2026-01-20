#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    vector<int> v;
    int e, g, p, t, y;
    e = freq[4];
    v.push_back(e);
    g = freq[6];
    v.push_back(g);
    p = freq[15];
    v.push_back(p);
    t = freq[19];
    v.push_back(t);
    y = freq[24];
    v.push_back(y);

    sort(v.begin(), v.end());

    int flag = 0;
    for(int i =  0;i<v.size();i++)
    {
        if(v[i] == 0)
        {
            flag = 1;
        }
    }

    if(flag == 0)
    {
        cout << v[0] << endl;
    }

    else 
    {
        cout<<flag-1<<endl;
    }

    return 0;
}