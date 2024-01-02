#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int sum=1;
    for(i=0;i<n;i++)
    {
        printf("%d ",sum);
        sum=sum*2+i;
    }
}
