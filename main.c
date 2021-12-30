#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int year, store_year, flag =0;
	int a[4] ,i=0;
	scanf("%d",&year);
	year++;
	store_year = year;
	// for (int i = 0; i < 10; i++)
	// {
	// 	year += 1;
	// 	printf("%d",year);
	// }
	
	while (1)
	{
		flag = 0;
		store_year = year;
		i=0;
		// printf("%d %d\n", store_year, year);
		while(store_year != 0)
		{
			a[i] = store_year % 10;
			i++;
			store_year /= 10;
		}
		qsort(a, 4, sizeof(int), cmpfunc);
		for (int i = 0; i < 3; i++)
		{
			if (a[i] == a[i+1])
			{
				flag=1;
				break;
			}
				
		}
		if (flag==0)
		{
			printf("%d", year);
			break;
		}
		year += 1;
		continue;
	}
	
	return 0;
}