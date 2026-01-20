#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;
#define ff(i, a, b) for(int i=a;i<b;i++)
#define basic int n;cin>>n;int a[n];for(int i=0;i<n;i++)cin>>a[i]

void seemanto()
{
    vector<int> v = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400};
    ll n;
    cin>>n;
    for(int i = 0;i<n;i++)
        cout<<v[i]<<' ';
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