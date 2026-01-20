#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;

        // case->1 : not posssible
        int op = 5;
        string temp = x;
        while (op--)
        {
            temp += temp;
        }

        bool psbl = false;
        int pos = temp.find(s);

        if (pos != string ::npos)
            psbl = true;

        if (!psbl)
        {
            cout << -1 << endl;
            continue;
        }

        // case -> 2 : possible but how many operation need
        int mnop = 0;
        temp = x;
        int idx1 = temp.find(s);
        if (idx1 != string::npos)
        {
            cout << 0 << endl;
        }

        else
        {
            while (op--)
            {
                temp += temp;
                mnop++;
                int idx = temp.find(s);
                if (idx != string ::npos)
                    break;
            }
            cout << mnop << endl;
        }
    }
    return 0;
}

/*
    learning :
        -> npos kivabe bole dey ekti string onno ekti string er substring ki na
        example :
            string x = "aaaa";
            string s = "a";

            int pos = x.find(s); //syntax : jar moddhe kujte cai.find(jare kujte cai);
            if(pos != string :: npos)
                cout<<"s is found at x";
            else
                cout<<"s is not found at x";

*/