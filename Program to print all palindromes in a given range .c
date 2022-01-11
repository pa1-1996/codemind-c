#include<stdio.h>
int reverse(int num)
{
    int rev=0, r;
    while(num)
    {
        r = num%10;
        rev = rev*10+r;
        num = num/10;
    }
    return rev;
}
int palindrome(int n)
{
    if(n==reverse(n))
    {
    	return 1;
	}
    return 0;
}
int main()
{
    int m, n, i;
    scanf("%d%d", &m, &n);
    for(i=m; i<=n; i++)
    {
    	if(palindrome(i))
    	{
    		printf("%d ", i);
		}
	}
}