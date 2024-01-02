#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        if((i%2)!=0)
        {
            for(j=0;j<n;j++)
            {
                l=k;
                printf("%d",k--);
            }
            printf("\n");
        }
        else
        {
            for(j=0;j<n;j++)
            {
                k=++l;
                printf("%d",k);
            }
            k=++l;
            printf("\n");
        }
    }
    return 0;
}

