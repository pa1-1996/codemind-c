#include<stdio.h>
int main()
{
    float n, sum = 0.0, i;
    scanf("%f", &n);
    for(i=1; i<=n; i++)
    {
        sum += 1/i;
    }
    printf("%.2f", sum);
}