#include<stdio.h>
int main()
{
    int n,i,rem,x,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    x=n;
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("Reverse of %d is %d",x,sum);
    return 0;
}