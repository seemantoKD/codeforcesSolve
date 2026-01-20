#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;

    int new_year = 0;

    for (int i = year + 1; i <= 9012; i++)
    {
        vector<int> v;
        int temp = i;
        int flag = 1;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (find(v.begin(), v.end(), digit) != v.end())
            {
                flag = 0;
                break;
            }
            v.push_back(digit);
            temp = temp / 10;
        }
        if (flag == 1)
        {
            new_year = i;
            break;
        }
    }
    cout << new_year << endl;
    return 0;
}


/*
learning : 
find function diye kivabe distinct character number check kora jay
*/