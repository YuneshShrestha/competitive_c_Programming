#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int k;
		scanf("%d",&k);
		char ch[k][100];
		int f=0;
		for(int i = 0 ; i<k ; i++)
		{
			scanf("%s",ch[i]);
		}
		for (int i = 0; i < k; i++)
		{

			if (ch[i][0]>='a' && ch[i][0]<='m')
			{
				for (int j = 0; ch[i][j] != '\0'; j++)
				{
					if (!(ch[i][j]>='a' && ch[i][j]<='m'))
					{
						f =1;
						break;
					}
				}
			}
			else if(ch[i][0]>='N' && ch[i][0]<='Z')
			{
				for (int j = 0; ch[i][j] != '\0'; j++)
				{
					if (!(ch[i][j]>='N' && ch[i][j]<='Z'))
					{
						f =1;
						break;
					}
				}
			}
			else
			{
				f = 1;
			}
			
			
		}
		if (f)
		{
			printf("No");
		}
		else
		{
			printf("Yes");
		}
		
		
		

	}
	
	return 0;
}