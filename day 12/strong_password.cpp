// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     string s;
//     while (t--)
//     {
//         cin >> s;
//
//         string all = "abcdefghijklmnopqrstuvwxyz";
//         string newstring = "";

//         for (int i = 0; i < all.size(); i++)
//         {
//             if (find(s.begin(), s.end(), all[i]) == s.end())
//             {
//                 newstring.push_back(all[i]);
//                 break;
//             }
//         }

//         int max_time = -1;
//         string final;
//         for (int i = 0; i < s.size(); i++)
//         {
//             string temp = s;
//             temp.insert(i, 1, newstring[0]);

//             int newTime = 2;

//             for (int j = 0; j < temp.size() - 1; j++)
//             {
//                 if (temp[j] == temp[j + 1])
//                 {
//                     newTime += 1;
//                 }

//                 else
//                 {
//                     newTime += 2;
//                 }

//                 if (newTime > max_time)
//                 {
//                     max_time = newTime;
//                     final = temp;
//                 }
//             }
//         }
//         cout << final << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        string all = "abcdefghijklmnopqrstuvwxyz";
        string newstr;

        for (int i = 0; i < all.size(); i++)
        {
            if (find(s.begin(), s.end(), all[i]) == s.end())
            {
                newstr.push_back(all[i]);
                break;
            }
        }

        int maxtime = -1;
        string final;

        for (int i = 0; i < s.size(); i++)
        {
            string temp = s;

            temp.insert(i, 1, newstr[0]);
            int time = 2;

            for (int j = 0; j < temp.size(); j++)
            {
                if (temp[j] == temp[j + 1])
                {
                    time += 1;
                }

                else
                {
                    time += 2;
                }

                if (time > maxtime)
                {
                    maxtime = time;
                    final = temp;
                }
            }
        }
        cout << final << endl;
    }
    return 0;
}