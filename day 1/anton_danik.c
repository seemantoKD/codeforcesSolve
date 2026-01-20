#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    str[n] = '\0';

    strupr(str);

    int count_A = 0;
    int count_D = 0;

    int i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];

        if (ch == 'A')
        {
            count_A++;
        }

        if (ch == 'D')
        {
            count_D++;
        }
        i++;
    }

    if (count_A > count_D)
    {
        printf("Anton\n");
    }

    else if (count_D > count_A)
    {
        printf("Danik\n");
    }

    else
    {
        printf("Friendship\n");
    }
}

/*

outcome :

-> kivabe n poriman character input niye n poriman character ke string e convert korte hoy.

*/
