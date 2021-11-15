#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d", &t);
	while(t--){
		int sum = 0,f=0,l=0;
		scanf("%d",&n);
		l += n%10;
		while(n>0)
		{
			f = n%10;
			n /=10;
		}
		f = n;
		sum = l + f;
		printf("\n%d\n",sum);
		
		
	}
	
}
