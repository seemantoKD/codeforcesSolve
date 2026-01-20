#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int current = 0;
        int max = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                current++;

                if (current > max)
                {
                    max = current;
                }
            }

            else
            {
                current = 0;
            }
        }

        cout << max << endl;
    }
    return 0;
}

/*
learning :

-> array ba string e kuno specific value darabahikvabe kotobar eseche ebong
    er moddhe sorboccho koto bar eseche ta find korte ei concept ta jana thaka
    valo.abort

    concept er fancy name -> longest consecutive segment
*/