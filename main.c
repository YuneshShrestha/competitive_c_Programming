#include<stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int m,x,d,a1,a2;
		scanf("%d",&x);
		scanf("%d",&m);
		scanf("%d",&d);
		a1=m*x;
		a2=d+x;
		if(a1 != a2)
		{
			if(a1<a2)
			{
				printf("\n%d\n",a1);
			}
			else{
				printf("\n%d\n",a2);
			}
		}
		else{
			printf("\n%d\n",a1);
		}
	}
	
	return 0;
}