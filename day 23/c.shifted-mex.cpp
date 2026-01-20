#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;
#define ff(i, a, b) for(int i=a;i<b;i++)
#define basic int n;cin>>n;vector<ll>v(n);for(int i=0;i<n;i++)cin>>v[i];

void seemanto()
{
    basic;

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    ll c = 1, mx = 1;

    ff(i,1,v.size())
    {
        if(v[i] <= v[i-1]+ 1)
        {
            c++;
            mx = max(mx,c);
        }
        else
            c = 1;
    }
    cout<<mx<<endl;
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