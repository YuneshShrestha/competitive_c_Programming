#include<stdio.h>
#include<math.h>
int main()
{
    int n,m, a, b, ans1 ,ans2, count=0;
    scanf("%d %d",&n,&m);
    a=sqrt(n);
    b=sqrt(m);
    for (int i = a; i>=0 ;i--)
    {
        for (int j = b; j >= 0; j--)
        {
            ans1 = i + pow(j,2);
            ans2 = pow(i,2) + j;
            if(n==ans2 && m==ans1)
            {
                count++;
            }
        }        
    }
    printf("%d",count);
    return 0;
}