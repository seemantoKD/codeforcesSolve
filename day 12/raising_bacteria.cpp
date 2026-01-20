#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    vector<int> v;
    int temp = x;
    while (temp != 0)
    {
        int val = temp % 2;
        temp = temp / 2;
        v.push_back(val);
    }

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

// another approach(even,odd)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     int count = 0;

//     while (x > 0)
//     {
//         if (x % 2 == 1)
//         {
//             count++;
//             x = x - 1;
//         }

//         else
//         {
//             x = x / 2;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

/*
Condition:
-> Number টাকে যতগুলো *unique 2-এর power* এর যোগফল দিয়ে প্রকাশ করা যায়,
   অর্থাৎ যতগুলো আলাদা power of 2 লাগছে, answer ততটাই হবে।

উদাহরণ:

*. n = 5
   Solve → 5 = 4 + 1
         → 2^2 + 2^0
         → দুইটি আলাদা 2-এর power (2^2 এবং 2^0) ব্যবহৃত হয়েছে
         → so, print 2

**. n = 8
    8 = 2^3
    → মাত্র একটি 2-এর power দরকার হয়েছে
    → so, answer = 1

Note:
→ x এর binary রূপে যতগুলো ১ আছে, উত্তর ততটাই হবে।
→ কারণ প্রতিটি ১ মানে একটি unique 2^k power যুক্ত হয়েছে যোগফলে।
*/