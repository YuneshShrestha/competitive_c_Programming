#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n, q=2, len=1, arr[10000]={0},rem, num=0, x;
		arr[0] = 1;
		scanf("%d",&n);

		while (q!=n+1)
		{
			x=0;
			while (x<len)
			{
				arr[x] = arr[x] * q;
				arr[x] += num;
				num = arr[x]/ 10;
				arr[x] = arr[x] % 10;
				x++;
			}
			while (num!=0)
			{
				arr[len] = num % 10;
				num /= 10;
				len++;
			}
			
			q++;
			
		}
		len--;
		while (len>=0)
		{
			printf("%d",arr[len]);
			len--;

		}
		printf("\n");
	}
	
	
	
	return 0;
}