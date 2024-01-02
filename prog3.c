#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                if(j==(n-1))
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }

            }
            printf("\n");
        }
        else
        {
            for(k=0;k<n;k++)
            {
                if((k==0)||(k==(n-1)))
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
