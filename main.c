#include<stdio.h>
int main()
{
    int n, ans=1, sum=0 , dima[100],count=0,fingers=1, flag=0, p_fingers;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Sum = %d\n",sum);
    dima[0] = 1;
    while (sum >= ans)
    {
       ans += n+1;
       count++;
       dima[count] = ans;
       
    }
    ans=0;
    // printf("Count = %d\n",count);
    // for (int i = 0; i <= count; i++)
    // {
    //     printf("%d",dima[i]);
    // }
    while (fingers<=5)
    {
       ans = sum + fingers;
       p_fingers = fingers;
       for (int i = 0; i < count; i++)
        {
            if(ans == dima[i]){
                fingers++;
                break;
            }       
        }
        if (p_fingers == fingers)
        {
           break;
        }
    }
    printf("%d",fingers);
    
    
    
    return 0;
}