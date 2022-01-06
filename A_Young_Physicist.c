#include<stdio.h>
int main(){
    int a[100][3], sum, flag =0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            scanf("%d",&a[i][j]);
       }
    }
   
       for (int j = 0; j < 3; j++)
       {
            sum =0;
            for (int i = 0; i < n; i++)
            {
                  sum += a[i][j];
            }
            if(sum!=0){
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }

    return 0;
}