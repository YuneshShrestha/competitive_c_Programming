#include<stdio.h>
int main()
{
    int T;
    printf("Number of test number cases:");
    scanf("%d",&T);
    while(T--)
    {
        int a, b;
        printf("Enter the value of a and b:");
        scanf("%d %d",&a, &b);
        int ans = a%b;
        printf("\nAns: %d\n",ans);
    }
    return 0;
}