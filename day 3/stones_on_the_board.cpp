#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


/*
learning : 
kivabe ekti string er pasapasi character duti compare kora lage 
*/