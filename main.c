#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		char a[1000000], b[1000000];
		scanf("%d",&n);
		int count=0, flag=0;
		scanf("%s",a);
		scanf("%s",b);
		for (int i = n-1; i >=0 ; i--)
		{
			if (a[i]<b[i])
			{
				flag = 1;
				count++;
			}
			if (a[i] == b[i])
			{
				if (flag)
				{
					count++;
				}
				
			}
			if (a[i]>b[i])
			{
				flag=0;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}