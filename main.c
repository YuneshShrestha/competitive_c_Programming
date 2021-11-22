#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a,b,p,q;
		scanf("%d %d %d %d", &a, &b, &p, &q);
		if(a==p && b==q)
		{
			printf("0\n");
		}
		else if((a+b)%2==0 != (p+q)%2==0)
		{
			printf("1\n");
		}
		else
		{
			printf("2\n");
		}
		
	}
	
	return 0;
}