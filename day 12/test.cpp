#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long root = (long long)round(pow((double)n, 1.0 / 1)); // power = 1; ->power root finding formula
    long long mul = 1;

    for (long long i = 1; i <= 1; i++) // power = 1->loop power porjonto colbe
    {
        mul = mul * root;
    }

    if (mul == n)
    {
        cout << 0 << " " << root << endl;
    }

    else
    {
        cout << -1 << endl;
    }
    return 0;
}


//question 

1. kuno ekti number ke duiti distinct number er jugfol dara prokas kora jay ki na 
2. kuno ekti number ke k ti distinct number er jugfol hisebe prokas kora jay ki na 
3. kuno ekti number ke k ti distinct number er jugfol er m power hisabe prokas kora jay ki na 
-> n = (a+b+c.....k)^m