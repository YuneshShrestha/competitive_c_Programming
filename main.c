#include<stdio.h>
int clean()
{
	int n,k,first;
	scanf("%d %d",&n,&k);
	int a[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (int j = 1; j <= k; j++)
	{
		int count = 0;
		// first digit
		for (int f = 0; f < n; f++)
		{
			if (a[f]!=j)
			{
				first = a[f];
				break;				
			}
		}	
		
		for (int i = 1; i < n; i++)
		{
		   if (first!=a[i] && j!=a[i])
			{
				count++;
				first=a[i];
			}
		}
		printf("%d\t",count);
	}
	printf("\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		clean();
	}
	
	return 0;
}