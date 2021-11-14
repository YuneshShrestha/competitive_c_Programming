#include<stdio.h>
int main()
{
    float x,y,ans;
    scanf("%f %f", &x, &y);
    if ((int)x%5==0 && y-x-0.5>0.0)
    {
         ans = y-x-0.5;
    }
    else{
         ans = y;
    }
    printf("%f",ans);
    return 0;
}