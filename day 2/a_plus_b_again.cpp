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
        int temp = n;
        int rem = temp % 10;
        temp = temp / 10;
        int result = temp + rem;
        cout << result << endl;
    }
    return 0;
}