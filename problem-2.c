#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,i,k;
    char n[101];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",&n);
        k = atoi(n);
        if(k%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
