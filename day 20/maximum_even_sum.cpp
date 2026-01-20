#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll a, b;
    cin >> a >> b;

    ll ans = -1;

    // k = 1
    ll sum1 = a + b;
    if (sum1 % 2 == 0)
        ans = max(ans, sum1);

    // k = 2
    if (b % 2 == 0)
    {
        ll sum2 = (2 * a) + (b / 2);
        if (sum2 % 2 == 0)
            ans = max(ans, sum2);
    }

    // k = b
    ll sum3 = (a * b) + 1;
    if (sum3 % 2 == 0)
        ans = max(ans, sum3);

    // k = b / 2
    if (b % 2 == 0)
    {
        ll sum4 = (b / 2 * a) + 2;
        if (sum4 % 2 == 0)
            ans = max(ans, sum4);
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        seemanto();

    return 0;
}

/* learning : suppose two numbers are a and b
    1. ekti even er sokol divisor hoite pare odd and hoite pare even
        -> kuno ekti number (b) er
            1. sob theke boro divisor = b (sob theke boro odd divior o jodi number odd hoy)
            2. sob theke chuto divisor = 1 (sob theke chuto odd divisor)
            3. sob theke boro even divisor = b / 2
            4. sob theke chuto even divisor = 2
            5. jodi number odd na hoy tahole sob theke boro odd divisor = number / pow(2 , k)

            extra for note :
            -> jekunu parity er number ke 2 diye multiply kore even bananu jay
            -> odd number er divisor sobsmy odd e hoy
*/
