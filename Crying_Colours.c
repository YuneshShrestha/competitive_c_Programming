#include<stdio.h>
int ans(){
     int n;
    scanf("%d", &n);
    int c[3][3], ans1, ans2;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
        {
            scanf("%d", &c[i][j]);
        } 
    }
    
    if (c[0][0] == n && c[1][1] == n && c[2][2] == n)
    {
        printf("0\n");
    }
                
    else{
        ans1 = c[1][0] + c[2][0] + c[2][1];
        ans2 = c[0][1] + c[0][2] + c[1][2];
        if (ans1 != ans2)
        {
            if(ans1> ans2){
                printf("%d\n",ans1);
            }
            else{
                printf("%d\n",ans2); 
            }
        }
        else{
            printf("%d\n",ans1);
        }
        
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ans();
    }
    
    return 0;
}