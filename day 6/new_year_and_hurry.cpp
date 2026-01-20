#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k;
    cin >> n >> k;

    int time = 240;
    int problem_solving_time = time - k;

    int count = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (5 * i);
        if (problem_solving_time >= sum)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}