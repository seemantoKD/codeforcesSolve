/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;

        string dharabahik_letter = "";
        char ch = '#';

        // dharabahik letter ke onno string e rakhi
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ch)
            {
                dharabahik_letter += s[i];
            }
            ch = s[i];
        }

        // dharabahik_letter er frequency count
        vector<int> freq(26, 0);
        for (int i = 0; i < dharabahik_letter.size(); i++)
        {
            char ch = dharabahik_letter[i];
            freq[ch - 'A']++;
        }

        // check frequency
        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;

        string dharabahik = "";
        char ch = '@';

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ch)
            {
                dharabahik += s[i];
            }
            ch = s[i];
        }

        vector<int> freq(26, 0);
        for (int i = 0; i < dharabahik.size(); i++)
        {
            char ch = dharabahik[i];
            freq[ch - 'A']++;
        }

        int flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

/*
🎯 learning :
-> কোনো একটি string এ কোনো একটি অক্ষর ধারাবাহিকভাবে থাকার পর,
   যদি সেটি আবার অন্য কোনো অক্ষরের পরে ফিরে আসে — তাহলে সেটা সন্দেহজনক।
   উদাহরণ: "ABCA" → এখানে A দুইবার এসেছে, মাঝে অন্য অক্ষর ছিল → সন্দেহজনক।

✅ Final Output:
   যদি কেউ কোনো অক্ষরে ফিরে আসে = "NO"
   যদি কেউ ফিরে না আসে = "YES"

🔍 sublearning :

1️⃣ ধারাবাহিক অক্ষর গুলো আলাদা স্ট্রিং এ রাখা (repeat block বাদ দিয়ে)
    ⤷ কারণ, আমরা দেখতে চাই কেউ break করার পর আবার ফিরে এসেছে কিনা।

    🔸 example input:   DDBBCCCBBEZ
    🔸 filtered output: DBCBEZ  ← এখানে B দুইবার এসেছে, তাই NO

    ✅ code:
    string dharabahik = "";
    char ch = '@';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ch)
        {
            dharabahik += s[i];
        }
        ch = s[i];
    }

2️⃣ filtered string এ প্রত্যেক অক্ষরের frequency বের করা
    ⤷ যদি কেউ ১বারের বেশি আসে → suspicious

    ✅ code:
    vector<int> freq(26, 0);
    for (int i = 0; i < dharabahik.size(); i++)
    {
        char ch = dharabahik[i];
        freq[ch - 'A']++;
    }

3️⃣ frequency array চেক করা
    ⤷ যদি freq[i] > 1 হয়, তাহলে flag = 0; output "NO"

    ✅ code:
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 1)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

*/