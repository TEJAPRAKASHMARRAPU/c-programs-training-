#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=6;
    for(i=1;i<=n;i++)
    {
        printf("%d ",sum);
        sum=sum*2+i;
    }
}
