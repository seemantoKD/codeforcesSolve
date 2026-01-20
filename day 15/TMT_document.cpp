#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        // step -> 1 : frequency
        int count_T = count(s.begin(), s.end(), 'T');
        int count_M = count(s.begin(), s.end(), 'M');

        if (count_T != (2 * count_M))
        {
            cout << "NO\n";
            continue;
        }

        // step -> 2 : sequentially tmt subsequence check

        // forward tmt subsequence check
        int balance = 0;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                balance++;
            }

            else
            {
                balance--;
            }

            if (balance < 0)
            {
                ans = false;
                break;
            }
        }

        if (!ans)
        {
            cout << "NO\n";
            continue;
        }

        // backward tmt subsequence check
        else
        {
            balance = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'T')
                {
                    balance++;
                }

                else
                {
                    balance--;
                }

                if (balance < 0)
                {
                    ans = false;
                    break;
                }
            }

            cout << (ans ? "YES\n" : "NO\n");
        }
    }
    return 0;
}

/*
    learning :
        1. string er count use kore spesific letter er frequency ber kora
        2. ekti specific letter er age o pore spesific onno ekti letter ache ki na
            # for example :
                user TMT goton korte cay
                    -> forward check diye dekhlam : m er age enough(1 ti) t ache ki na
                    -> backward check diye dekhlam : m er pore enough(1 ti) t ache ki na
                *** observation : jodi condition duiti satisfai kore tahole tmt goton somvob

    Note : ei tricks ta ke balance checking nam e daka hoy. onek jaygay kaj e lage. jemon move brackets o amra ei concept use korchi
*/

/*
    usses : 
        -> kuno ekta string theke onno kichu create kora jabe ki na type problem a use korbo
*/