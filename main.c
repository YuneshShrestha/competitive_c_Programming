#include<stdio.h>
long long int b[1000000] = {0};
long long int coins(long long int n)
{
	long long int ans = 0;
	if (n<12)
	{
		return n;
	}
	if (n<1000000 && b[n] != 0)
	{
		return b[n];
	}
	ans = coins(n/2) + coins(n/3) + coins(n/4);
	if (n<1000000)
	{
		b[n] = ans;
	}
	return ans;
	
}
int main()
{
	long long int n;
	while (scanf("%lld",&n) != EOF)
	{
		printf("%lld",coins(n));
		printf("\n");
	}
	
	

	return 0;
}