#include<stdio.h>
int main()
{
	int a[3][3],b[3][3]={0};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if(a[i][j]%2 != 0)
			{
				if (j-1>=0)
				{
					b[i][j-1]+=1;
				}
				if (j+1<3)
				{
					b[i][j+1]+=1;
				}
				if(i-1>=0){
					b[i-1][j]+=1;
				}
				if(i+1<3){
					b[i+1][j]+=1;
				}
				
				b[i][j]+=1;
				
				

			}
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			// printf("%d\t",b[i][j]);
			if (b[i][j] %2 == 0)
			{
				printf("1");
			}
			else{
				printf("0");

			}
		}
		printf("\n");
	}
	return 0;
}