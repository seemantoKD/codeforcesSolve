#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);

    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] - '0' == 4 || str[i] - '0' == 7)
        {
            count++;
        }

        i++;
    }

    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
    return 0;
}


/*

outcome :

1. string character to string number or digit


*/