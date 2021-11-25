#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n], min ,max;
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
		min=max=a[0];
		for (int i = 0; i < n; i++)
		{
			if(a[i]>max)
			{
				max = a[i];
			}
			if(a[i]<min)
			{
				min = a[i];
			}
		}
		printf("%d", max-min);
	}
	
	
	return 0;
}