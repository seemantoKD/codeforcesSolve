#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string vowel = "aeiouy";
    string result = "";

    for (char ch : s)
    {
        if (vowel.find(ch) == string ::npos)
        {
            result += '.';
            result += ch;
        }
    }
    cout << result << endl;

    return 0;
}

/*
learning :
    -> npos use kore kunu ekti string theke specific kunu character delete kora
    -> kunu ekti string er every character er age specific onno ekti character set kora
*/