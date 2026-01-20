#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, k;
    string s;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        // step -> 1: find frequency
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z')
            {
                freq[ch - 'a']++;
            }
        }

        // step -> 2 : odd frequency count
        int odd_freq = 0;
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] > 0)
            {
                if (freq[i] % 2 == 1)
                {
                    odd_freq++;
                }
            }
        }

        // step -> 3 : decision
        int rem = n - k;
        // case->1 : rem even
        if (rem % 2 == 0)
        {
            if (odd_freq <= k)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }

        // case -> 2 : rem odd
        else
        {
            if (odd_freq - 1 <= k)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}

/*
learning :
    -> string er every character er freq find
        #how??
            step->1 : freq nam er vector declare kora
                    needed size diye ebong initialize kora 0 diye
            step->2 : string er size porjonto loop calanu
                        - loop er vetore
                            # char ch = s[i];
                            # freq[ch-'a]++;

            step->3 : freq array size porjonto loop calanu
                    - loop er vitore
                        # condition diye check korbo
                            if(freq[i] > 0)
                            {
                                cout<<char(i + 'a') << "-> "<<freq[i];
                            }

    -> parity summand :
        # size even hole : all element even hote hobe , tailei palindrome somvob
        # size odd hole : matro ekta element odd baki sob even ,tailei palindrome somvob.
*/