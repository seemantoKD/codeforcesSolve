// brute force -> complexity : o(n*n*n)
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int t;
//      cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int n = s.size();

//         int c1 = count(s.begin(), s.end(), '1');
//         int c2 = count(s.begin(), s.end(), '2');
//         int c3 = count(s.begin(), s.end(), '3');

//         // case -> 1 : size = 0
//         if (c1 == 0 || c2 == 0 || c3 == 0)
//         {
//             cout << 0 << endl;
//             continue;
//         }

//         pair<string, int> ans = {"", 0};

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j <= n; j++)
//             {
//                 string sub = s.substr(i, j - i); // sting s er sokol substring

//                 int c1 = count(sub.begin(), sub.end(), '1');
//                 int c2 = count(sub.begin(), sub.end(), '2');
//                 int c3 = count(sub.begin(), sub.end(), '3');

//                 if (c1 > 0 && c2 > 0 && c3 > 0)
//                 {
//                     if (ans.first == "" && ans.second == 0)
//                         ans = {sub, sub.size()};

//                     else
//                     {
//                         if (sub.size() < ans.second)
//                         {
//                             ans = {sub, sub.size()};
//                         }
//                     }
//                 }
//             }
//         }
//         cout << ans.second << endl;
//     }
//     return 0;
// }

/*
//tle
// another approach -> complexity : o(n*n)
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
        int n = s.size();

        // check if all '1','2','3' exist
        int c1 = count(s.begin(), s.end(), '1');
        int c2 = count(s.begin(), s.end(), '2');
        int c3 = count(s.begin(), s.end(), '3');

        if (c1 == 0 || c2 == 0 || c3 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        pair<string, int> ans = {"", 0};

        for (int i = 0; i < n; i++)
        {
            int c1 = 0, c2 = 0, c3 = 0;
            for (int j = i; j < n; j++)
            {
                if (s[j] == '1')
                    c1++;
                else if (s[j] == '2')
                    c2++;
                else if (s[j] == '3')
                    c3++;

                if (c1 > 0 && c2 > 0 && c3 > 0)
                {
                    string sub = s.substr(i, j - i + 1);

                    if (ans.first == "" || sub.size() < ans.second)
                    {
                        ans = {sub, sub.size()};
                    }
                    break;
                }
            }
        }

        cout << ans.second << endl;
    }
    return 0;
}
*/

// another approach -> complexity : o(n)
// technique name -> sliding window

/*
    learning :
        1. string s er sob contigios substring ber kora -> o(n*n*n)
            code :
            for(int i = 0; i < n; i++)
                for(int j = i+1; j <= n; j++)
                    string sub = s.substr(i, j-i);


        2. এই code কাজ করে shortest substring বের করতে, কিন্তু complexity O(n²)
            code :
            for (int i = 0; i < n; i++)
                {
                    int c1 = 0, c2 = 0, c3 = 0;
                    for (int j = i; j < n; j++)
                    {
                        if (s[j] == '1')
                            c1++;
                        else if (s[j] == '2')
                            c2++;
                        else if (s[j] == '3')
                            c3++;

                        if (c1 > 0 && c2 > 0 && c3 > 0)
                        {
                            string sub = s.substr(i, j - i + 1);

                            if (ans.first == "" || sub.size() < ans.second)
                            {
                                ans = {sub, sub.size()};
                            }
                            break;
                        }
                    }
                }
*/