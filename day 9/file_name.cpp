#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    int remove = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x')
        {
            count++;

            if (count >= 3)
            {
                remove++;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << remove << endl;
    return 0;
}

/*
learning:
-> একটি স্ট্রিংয়ের মধ্যে কোনো নির্দিষ্ট ক্যারেক্টার (যেমন: 'x') কতবার টানা (consecutive) এসেছে,
   সেটা গুনতে শিখলাম।
-> যদি টানা একই ক্যারেক্টার তিনবার বা তার বেশি পাওয়া যায়,
   তাহলে ৩টির পরের প্রতিটি অতিরিক্ত ক্যারেক্টারকে ১টি করে remove করতে হবে।
-> টানা 'x' এর সংখ্যা ৩ বা তার বেশি হলেই remove কাউন্ট বাড়াতে হবে।
-> এইভাবে substring check করা, এবং condition অনুযায়ী কাজ করাও শিখলাম।
*/
