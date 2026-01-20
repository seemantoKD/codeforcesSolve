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

        int balance = 0;
        int change_or_move = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                balance++;
            }

            else
            {
                balance--;
            }
            change_or_move = min(change_or_move, balance);
        }
        cout << -change_or_move << endl;
    }
    return 0;
}

/*
✅ শেখা (Core Learning):

যদি কোনো ক্যারেক্টার (যেমন ')') এর আগে অন্য কিছু (যেমন '(') থাকা বাধ্যতামূলক হয়,
আর সেটা না থাকে — তাহলে যতবার এই নিয়ম ভাঙে, ততবার ফিক্স করতে হয়।

এই শর্ত ভাঙার সংখ্যা বের করতে আমরা:
- একটি balance ভ্যারিয়েবল রাখি
- '(' পেলে balance++
- ')' পেলে balance--
- যতবার balance negative হয় (min_balance), ততবার ফিক্স দরকার

🔹 Final Answer = -1 * (minimum balance during scan)

✅ এই আইডিয়া future-এ যেখানে যেখানে লাগবে:
- Regular bracket/parentheses checking
- Token validation problems
- Inventory balance (stock before sell)
- Prefix sum constraints (e.g., subarray sum ≥ 0)
- Scheduling/resource allocation with order rules

👉 মূল কথা:
"আগে কিছু থাকার শর্ত" ভাঙলে, সেটা ধরতে হলে balance বা prefix sum দিয়ে ট্র্যাক করতে হবে।
*/