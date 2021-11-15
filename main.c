#include <stdio.h>

int main(void) {
	int a,b, ans=0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)
	{
		int n;
		scanf("%d",&n);
		if(n%b==0)
		{
			ans++;
		}
	}
	printf("%d", ans);
	
}
