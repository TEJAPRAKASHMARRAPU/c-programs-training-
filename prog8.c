#include<stdio.h>
int main()
{
    int n,i,a=2,b=6,c=11;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            printf("%d ",a);
            a+=8;
        }
        else if(i%3==1)
        {
            printf("%d ",b);
            b+=9;
        }
        else
        {
            printf("%d ",c);
            c+=10;
        }
    }
    return 0;
}
