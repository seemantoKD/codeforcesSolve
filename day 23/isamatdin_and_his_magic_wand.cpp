#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll odd = 0,even = 0;
    for(auto &x : v)
    {
        cin>>x;
        if(x & 1)
            odd++;
        else 
            even++;
    }
    if(even > 0 and odd > 0)
        sort(v.begin(),v.end());

    for(auto val : v)
        cout<<val<<' ';
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while (t--)
        seemanto();
    return 0;
}