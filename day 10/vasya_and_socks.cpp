#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int temp = n;

    int count = 0;
    for (int i = 1; temp > 0; i++)
    {
        temp--;
        count++;
        if (i % m == 0)
        {
            temp++;
        }
    }
    cout << count << endl;
    return 0;
}