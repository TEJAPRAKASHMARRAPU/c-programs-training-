#include<stdio.h>
//Ramanujam Number
// 1729 = 1+7+2+9 => 19
// 19 => 91
// 19*91 = 1729

int main()
{
    int n,rev=0,m,sum=0,l,ram,rem,prod;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    l=sum;
    while(sum>0)
    {
        rem=sum%10;
        rev=rev*10+rem;
        sum=sum/10;
    }
    //prod=l*rev;
    if((l*rev)==m)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
