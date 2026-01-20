#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    long double sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    long double avg = sum / n;
    printf("%.13Lf\n",avg);
}
