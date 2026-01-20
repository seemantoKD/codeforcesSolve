#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;
#define ff(i, a, b) for(int i=a;i<b;i++)
#define basic int n;cin>>n;int a[n];for(int i=0;i<n;i++)cin>>a[i]

void seemanto()
{
    ll n;
    cin>>n;
    vector<ll>v(n);

    for(auto &x: v)
        cin>>x;

    ll mx = *max_element(v.begin(),v.end());
    ll ans = mx * n;
    cout<<ans<<endl;
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