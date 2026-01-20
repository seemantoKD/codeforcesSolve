#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int count = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int isUnique = 1;

        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                isUnique = 0;
                break;
            }
        }

        if (isUnique)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }

    else
    {
        printf("IGNORE HIM!\n");
    }
}

/*
outcome :

-> how to count only unique character from a string

*/