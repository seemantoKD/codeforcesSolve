#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    vector<string> v = {"Ocelot", "Serval", "Lynx"};
    string x, y;
    cin >> x >> y;

    ll idx1 = -1, idx2 = -1;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            idx1 = i;
        if (v[i] == y)
            idx2 = i;
    }

    if(idx1>=idx2)
        cout<<"Yes\n";
    else 
        cout<<"No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
        seemanto();
    return 0;
}