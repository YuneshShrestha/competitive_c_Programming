#include<stdio.h>
#include <string.h>
int main()
{
	char s[100], s1[100];
	int ans;
	
	scanf("%s %s", s, s1);
	strlwr(s);
	strlwr(s1);
	ans = strcmp(s, s1);

	printf("%d",ans);
	return 0;
}