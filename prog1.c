#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        a[i]=65+i;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("%c",a[j]);
        }
        for(j=0;j<i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}
