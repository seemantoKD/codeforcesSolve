#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int result = 0;
    for (int i = 1; i <= w; i++)
    {
        result = result + (k * i);
    }

    int ans = result - n;

    if (ans > 0)
    {
        printf("%d\n", ans);
    }
    else
    {
        printf("0\n");
    }
}
