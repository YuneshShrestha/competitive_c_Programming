#include<stdio.h>
int main(void)
{
	int n=6;
	int q=2;
	int arr[1000]={0};
	arr[0] = 1;
	int len =1;
	int x = 0;
	int num =0;
	scanf("%d",&n);
	while(q!=n)
	{
		x=0;
		while(x<len)
		{
			//1. arr[0] becomes 2
			// 2. arr[0] * 3 becomes 6
			arr[x] = arr[x] * q; 
			// 3. arr[0] * 4 becomes 24 so we are trying to store one digit in each array
			// 4. arr[0] * 5 = 4*5 = 20  arr[1] * 5 = 2*5 =10
			arr[x] += num; //arr[1] = 12
			num = arr[x]/10; //3. returns 2    4. returns 2   returns 1
			//3. storing 4 of 24 in arr[0]   4. arr[0] = 0
			arr[x] = arr[x]%10;  // arr[1] = 2
			// exiting loop
			x++;
		}

		while (num!=0)
		{
			//3. storing 2 of 24 in arr[1]
			// 3. reminder of 2 will be 2
			// 4. arr[2] = 1 
			arr[len] = num%10;
			//3. num = 0
			// 4. num = 0
			num /= 10;
			//3. len= 2
			// 4. len = 3
			len++;
		}
		
		q++;
	}
	len--;
	while(len >= 0)
	{
		printf("%d",arr[len]);
		len--;
	}
	
}