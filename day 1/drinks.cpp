#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    long double avg = sum / n;
    printf("%.13Lf\n", avg);
}
