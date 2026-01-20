/*
problem : emn ekta position a string ke part korte hobe jate duita string er modde thaka number of different character er sum large hoy
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

    sort(s.begin(), s.end());

    ll l = 0;
    ll r = n - 1;

    string result = "";
    while (l <= r)
    {
        if (l == r)
            result += s[r--];
        else
        {
            result += s[l++];
            result += s[r--];
        }
    }
    // cout<<result<<endl;

    ll max_ans = 0;
    for (ll i = 1; i < n; i++)
    {
        string s1 = result.substr(0, i);
        string s2 = result.substr(i);

        set<char> set1(s1.begin(), s1.end());
        set<char> set2(s2.begin(), s2.end());

        max_ans = max(max_ans, (ll)(set1.size() + set2.size()));
    }

    cout << max_ans << endl;
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

    learning :
        1. ekti sorted string ke kivabe alternating vabe sort kora jay
            # alternating means prothome sobceye boro value then sobceye chuto then
                second largest so on so on......

        2. substring use kore onno ekta string a old string er kicu ongso set kora
        3. set er size hisebe loop chara string set kora
*/

// prefix and suffix distinct count approach
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

    set<char> st;
    vector<ll> pre(n + 1, 0);
    vector<ll> suff(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        st.insert(s[i - 1]);
        pre[i] = st.size();
    }

    st.clear();

    for (ll i = n; i >= 1; i--)
    {
        st.insert(s[i - 1]);
        suff[i] = st.size();
    }

    ll r = 0;
    for (ll i = 0; i < n; i++)
        r = max((pre[i] + suff[i + 1]), r);
    cout << r << endl;
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

/*
    learning : 
        ekta technique -> precomputation
*/