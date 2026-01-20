#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;

    ll c0 = count(s.begin(),s.end(),'0');
    ll c1 = count(s.begin(),s.end(),'1');

    ll ans = min(c0,c1);
    
    // if(ans & 1)
    //     cout<<"DA\n";
    // else 
    //     cout<<"NET\n";

    cout<<(ans & 1 ? "DA\n" : "NET\n");
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