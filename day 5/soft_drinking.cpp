#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    int result1, result2, result3, result4, val, result;
    result1 = (arr[1] * arr[2]);
    result2 = result1 / arr[6];
    result3 = (arr[3] * arr[4]);
    result4 = (arr[5] / arr[7]);
    val = min(result2, min(result3, result4));
    result = val / arr[0];
    cout << result << endl;
    return 0;
}

/*
learning :
->min function matro duita value niye kaj kore amra jodi dui er odik dekhte cai tokhon
prothome ekta value likhe coma then abar baki gular min kora.
jemon :
min(result2, min(result3, result4));
*/