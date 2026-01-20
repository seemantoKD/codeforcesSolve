#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, int> freq;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
            freq[x]++;
        }

        int ck = freq[k];
        int miss = 0;
        for (int i = 0; i <= k - 1; i++)
            if (freq[i] == 0)
                miss++;

        if (ck <= miss)
            cout << miss << '\n';
        else
            cout << ck << endl;
    }
    return 0;
}

/*
    learning : 
        -> kuno ekta array te mex jodi x hoy and amader bola hoy
            mex ke x theke k te neya taile amra ja korbo

            1. prothome sobar frequency count
            2. ck = freq[k]
            3. loop calabe <k porjonto
                -> loop er moddhe count++ korbo jodi freq[i] == 0 hoy ebong seta miss nam er variable a store korbo
            4. condition check 
                -> jodi ck > miss hoy taile 
                    ans = ck
                -> otherwise 
                    ans = miss

*/