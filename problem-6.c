#include<stdio.h>
int main()
{
    int T,N,j,sum=0;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
        scanf("%d",&N);

        sum=N%10;
        sum=sum+(N/10000);

        printf("sum = %d\n",sum);




    }
    return 0;
}
