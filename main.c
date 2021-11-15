#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d", &t);
	while(t--){
		int sum = 0;
		scanf("%d",&n);
		while(n)
		{
			sum += n%10;
			n /= 10;
		}
		printf("\n%d\n",sum);
	}
	
}
