#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int max0 = 0;
    int max1 = 0;
    int count1 = 0;
    int count0 = 0;

    // loop for checking serially maximum 0 counting
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            count0++;
            if (count0 > max0)
            {
                max0 = count0;
            }
        }

        else
        {
            count0 = 0;
        }
    }

    // loop for serially maximum 1 counting
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count1++;
            if (count1 > max1)
            {
                max1 = count1;
            }
        }

        else
        {
            count1 = 0;
        }
    }

    if (max0 >= 7 || max1 >= 7)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }
    return 0;
}

/*
learning :

-> array ba string e kuno specific value darabahikvabe kotobar eseche ebong
    er moddhe sorboccho koto bar eseche ta find korte ei concept ta jana thaka
    valo.

    concept er fancy name -> longest consecutive segment
*/