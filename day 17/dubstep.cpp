#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string t = "WUB";
    int pos = 0;
    vector<string> ans;

    while (1)
    {
        pos = s.find(t);
        if (pos == string ::npos)
        {
            ans.push_back(s);
            break;
        }

        else
        {
            if (pos > 0) // wub er age kichu character ache
                ans.push_back(s.substr(0, pos));
            s.erase(0, pos + t.size()); // first wub theke 2nd wub er shurur index er ag porjonto kete fellam
        }
    }

    for (auto st : ans)
    {
        cout << st << " ";
    }
    return 0;
}

/*
    note :
        1. pos > 0 → WUB-এর আগে কিছু characters আছে, তাই substring push করা যাবে।
        2. pos == 0 → WUB string-এর শুরুতে আছে, আগে কিছু push করার নেই।
        3. pos == string::npos → WUB string-এ নেই, while loop exit হবে।
*/

/*
    learning : technique name -> String splitting by a fixed separator

        1. kuno ekti string er nirdisto kunu separator(wub) er moddhe
            kuno character thakle ta alada ber kore ana
*/