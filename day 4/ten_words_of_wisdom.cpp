#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, word, quality;
    while (t--)
    {
        cin >> n;
        int max_quality = 0;
        int winner = 0;
        int response_number = 1;
        while (n--)
        {
            cin >> word >> quality;

            if (word <= 10 && quality > max_quality)
            {
                max_quality = quality;
                winner = response_number;
            }
            response_number++;
        }
        cout << winner << endl;
    }
    return 0;
}