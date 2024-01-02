#include<stdio.h>
int main()
{
    int n,i,j,k,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        count=10*i+1;
        for(j=0;j<n;j++)
        {
            printf("%d ",count);
            count=count+i+1;
        }
        printf("\n");
    }
}
