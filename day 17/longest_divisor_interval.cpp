// brute force solution tle
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long n;
//         cin >> n;

//         vector<long long> divisor;
//         for (long long i = 1; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 divisor.push_back(i);
//                 if (i != n / i)
//                     divisor.push_back(n / i);
//             }
//         }

//         sort(divisor.begin(), divisor.end());
//         // for (auto val : divisor)
//         //     cout << val << endl;
//         int count = 1;
//         int max = 1;
//         for (long long i = 0; i < divisor.size() - 1; i++)
//         {
//             if (divisor[i] + 1 == divisor[i + 1])
//             {
//                 count++;
//                 if (count > max)
//                     max = count;
//             }

//             else
//                 count = 1;
//         }
//         cout << max << endl;
//     }
//     return 0;
// }

// optimal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int maxc = 0;
        int k = 1;
        while (1)
        {
            if (n % k == 0)
            {
                maxc++;
                k++;
            }
            else
                break;
        }
        cout << maxc << endl;
    }
    return 0;
}
/*
learning :
    1. sobceye kom complexity te divisor ber korar code :
        vector<long long> divisor;
        for (long long i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisor.push_back(i);
                if (i != n / i)
                    divisor.push_back(n / i);
            }
        }
    2. ek sari number(1,2,4,5,6,8,9) theke por por number(4,5,6) kototi ache ta ber kora shikhlam
    3. optimal code theke
        -> maximum consecutive sequence count kora shikhlam
*/

/*
    note :
        -> কোনো সংখ্যার সর্বোচ্চ ধারাবাহিক (consecutive) ভাগফল ১ থেকে শুরু হয় এবং যতদূর পর্যন্ত ১, ২, …, k সংখ্যা সব n কে ভাগ করে, সেই পর্যন্ত চলে।
            code :
                while (1)
                {
                    if (n % k == 0)
                    {
                        maxc++;
                        k++;
                    }
                    else
                        break;
                }
*/