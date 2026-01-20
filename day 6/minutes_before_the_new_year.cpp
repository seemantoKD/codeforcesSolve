#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int reserve_time = 1440;
    int h, m;
    while (t--)
    {
        cin >> h >> m;
        h = h * 60;
        int input_time = h + m;
        int result = reserve_time - input_time;
        cout << result << endl;
    }
    return 0;
}