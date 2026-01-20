#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, k;
    while (t--)
    {
        cin >> n >> k;
        long long min_sum_odd = k * 1;
        long long min_sum_even = 2 * k;

        // case 1 -> all number even
        if (n >= min_sum_even && (n % 2 == 0))
        {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
                n = n - 2;
            }
            cout << n << endl;
        }

        // case 2 -> all number odd
        else if (n >= min_sum_odd && ((n % 2) == (k % 2)))
        {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
                n = n - 1;
            }
            cout << n << endl;
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

/*
remember :

1. kuno ekti number(n) ke k ti even  number e tokhon e prokas kora jabe jokhon
    -> n >= 2 *k && n even

2. kuno ekti number(n) ke k ti odd number e tokhon e prokas kora jabe jokhon
    -> n >= k * 1 && (n % 2 == k% 2)


3. kuno ekti number(n) ke k ti distinct positive number e prokas(0 hote parbe na) kora jabe tokhon e jokhon
    -> n >= k*(k+1)/2


4. kuno ekti number(n) ke k ti jekunu positve number die prokas (distinct howa lagbe na)
    -> n >= k
*/

/*
Step-by-step solution:

1. Input n and k.

2. Calculate minimum sum needed:
   - For odd numbers: min_sum_odd = k * 1 (all ones)
   - For even numbers: min_sum_even = 2 * k (all twos)

3. Check parity conditions:
   - Odd case: n % 2 == k % 2
   - Even case: n % 2 == 0

4. Check possibility:
   - If n >= min_sum_even and n is even, even representation possible.
   - Else if n >= min_sum_odd and parity matches, odd representation possible.
   - Else, no valid representation.

5. If possible:
   - Print "YES"
   - Print k-1 times 1 or 2 (depending on parity)
   - Print remaining value (n - sum of previous k-1 numbers)

6. If not possible:
   - Print "NO"
*/