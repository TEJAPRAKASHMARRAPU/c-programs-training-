#include<stdio.h>
int main()
{
    int a=4,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        a=(a*3)-2;
    }
    return 0;
}

