// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<string> s;
//     string str;

//     while (n--)
//     {
//         cin >> str;
//         s.push_back(str);
//     }

//     string team1 = s[0];
//     string team2 = "";
//     int count1 = 0, count2 = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == team1)
//         {
//             count1++;
//         }

//         else
//         {
//             if (team2 == "")
//             {
//                 team2 = s[i];
//             }
//             count2++;
//         }
//     }

//     if (count1 > count2)
//     {
//         cout << team1 << endl;
//     }

//     else
//     {
//         cout << team2 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string str;
    vector<string> s;
    while (n--)
    {
        cin >> str;
        s.push_back(str);
    }

    string team1 = s[0];
    string team2 = "";
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == team1)
        {
            count1++;
        }

        else
        {
            if (team2 == "")
            {
                team2 = s[i];
            }
            count2++;
        }
    }

    if (count1 > count2)
    {
        cout << team1 << endl;
    }

    else
    {
        cout << team2 << endl;
    }
    return 0;
}