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
        // case -> 1 : already divisible by 3
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }

        // case -> 2 : already divisible na
        else
        {
            cout << "First" << endl;
        }
    }
    return 0;
}