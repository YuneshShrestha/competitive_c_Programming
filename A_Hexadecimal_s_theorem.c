#include<stdio.h> 
int a[100000];
void fibnum(int n)
{   
    a[0] = 0;
    a[1] = 1;
 
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
}
 
int main()
{
    int n, sum=0,count=3,ans[3];
    scanf("%d",&n);
    fibnum(n);
    for (int i = n; count-1>=0; )
    {
        if (count-1>0)
        {
            if (a[i]<n && (sum+a[i])<n)
            {
                sum += a[i]; 
                printf("i=%d %d\t\n",i,a[i]);
                ans[count-1]=a[i];  
                count--;
            }
        }
        else
        {
            if (a[i]<n && (sum+a[i])<=n)
            {
                sum += a[i]; 
                ans[count-1]=a[i];  
                count--;
            }
        }
        
      
            if (i-1 >= 0 && (a[i]+sum) >= n)
            {
                printf("Current:%d\n",i);
                i--;
            }
    }
    printf("%d",sum);
    if (sum==n)
    {
        for (int i = 0; i <= 2; i++)
        {
        printf("%d ",ans[i]);
        }
    }
    else{
        printf("I'm too stupid to solve this problem");
    }   
    return 0;
}