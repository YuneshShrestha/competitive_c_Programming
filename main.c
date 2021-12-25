#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}
int main()
{
	int k, n, ans =0;
	int s[1500];
	scanf("%d %d",&k, &n);
	for (int i = 0; i < k; i++)
	{
		scanf("%d",&s[i]);
	}
	qsort(s, k, sizeof(int), cmpfunc);

	for (int i = 0; i < n; i++)
	{
		ans++;

		for (int j = i; j < k; j++)
		{
			if(s[i] == s[j])
			{
				ans++;
			}
		}
		i += ans;
	}
	printf("%d", ans);
	
	return 0;
}