/*
//code thik ache but tle ashe

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
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int temp = i;
            vector<int> v;

            while (temp != 0)
            {
                int digit = temp % 10;
                v.push_back(digit);
                temp = temp / 10;
            }

            int flag = 1;
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] != v[i + 1])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
    */

/*
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
    int count = 0;

    for (int i = 1; i <= 9; i++)
    {
        for (int digit = i; digit <= n; digit = digit * 10 + digit)
        {
            count++;
        }
    }
    cout << count << endl;
}
return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count = 0;

        // প্রতিটা base digit দিয়ে ordinary numbers তৈরি করো
        for (int d = 1; d <= 9; d++) {
            int num = d;
            while (num <= n) {
                count++;
                num = num * 10 + d;
            }
        }

        cout << count << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    vector<int> v = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 777, 888, 999, 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 11111, 22222, 33333, 44444, 55555, 66666, 77777, 88888, 99999, 111111, 222222, 333333, 444444, 555555, 666666, 777777, 888888, 999999, 1111111, 2222222, 3333333, 4444444, 5555555, 6666666, 7777777, 8888888, 9999999, 11111111, 22222222, 33333333, 44444444, 55555555, 66666666, 77777777, 88888888, 99999999, 111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888, 999999999};

    while (t--)
    {
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
        }

        else
        {
            int count = 9;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] <= n)
                {
                    count++;
                }

                else
                {
                    break;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}

/*
correct and smart approch

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
   while(t--){
    long long n;
    cin >> n;
    if(n<10)
      cout << n << '\n';

    else if(n<100){
        long long a= n/11;
        long long b= 9+a;
        cout << b << endl;
    }
    else if(n<1000){
        long long a= n/111;
        long long b= 18+a;
        cout << b << endl;
    }
     else if(n<10000){
       long long a= n/1111;
        long long b= 27+a;
        cout << b << endl;
    }
     else if(n<100000){
        long long a= n/11111;
        long long b= 36+a;
        cout << b << endl;
    }
     else if(n<1000000){
        long long a= n/111111;
        long long b= 45+a;
        cout << b << endl;
    }
     else if(n<10000000){
        long long a= n/1111111;
       long long b= 54+a;
        cout << b << endl;
    }
     else if(n<=100000000){
       long long a= n/11111111;
       long long b= 63+a;
        cout << b << endl;
    }
    else if(n<=1000000000){
       long long a= n/111111111;
       long long b= 72+a;
        cout << b << endl;
    }
    }
    return 0;
}
*/