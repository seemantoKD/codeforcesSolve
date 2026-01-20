#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = (str[0] - 'a') + 'A';
    }

    printf("%s\n", str);
}

/*

outcome :

-> how to convert small letter to capital letter
 and capital letter to small letter in a string.

*/