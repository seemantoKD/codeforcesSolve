#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int exit, enter;
    int result = 0;
    int max = 0;
    while (n--)
    {
        cin >> exit >> enter;
        result = result + enter - exit;
        if (result > max)
        {
            max = result;
        }
    }
    cout << max << endl;
    return 0;
}