#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // step 1 : input string e fft ba ntt ache ki na check
        bool ache = false;
        if (s.find("FFT") != string ::npos) // ache
        {
            ache = true;
        }

        else if (s.find("NTT") != string ::npos) // ache
        {
            ache = true;
        }

        // jodi thake tahole string sort kore print
        if (ache)
        {
            sort(s.begin(), s.end());
            reverse(s.begin(), s.end());
            cout << s << endl;
        }

        else
        {
            cout << s << endl;
        }
    }
    return 0;
}

/*
learning :
    -> string er find function diye ekti string e kuno ekti nirdisto
        substring ache ki na check kora
*/