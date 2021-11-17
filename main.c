#include<stdio.h>
int main()
{
	int a[10] = {0}, num, rem, i;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while (num)
	{
		rem = num % 10;
		a[rem]++;
		num /= 10;
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		if (a[i] != 0)
		{
			printf("Number = %d , Count = %d \n",a[i],i);
		}
		
	}
	

	
	return 0;
}