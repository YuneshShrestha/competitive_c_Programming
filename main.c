#include<stdio.h>
int main(void)
{
	int n,l;
	scanf("%d",&n);
	for (int i = 1; i <= 10; i++)
	{
		if(n%i==0)
		{
			l =i;
		}
	}
	printf("%d",l);
	
	return 0;
}