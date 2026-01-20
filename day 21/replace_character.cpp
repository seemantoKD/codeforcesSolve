#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> freq(26, 0);

    for(auto &i : s)
        freq[i-'a']++;
    
    char mx = s[0] , mn = s[n-1];
    for(ll i = 0;i<26;i++)
    {
        if(freq[i] >= freq[mx-i])
            mx = 'a' + i;
        if(freq[i] <= freq[mn - i])
            mn = 'a' + i;
    }
    
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        seemanto();
    return 0;
}

