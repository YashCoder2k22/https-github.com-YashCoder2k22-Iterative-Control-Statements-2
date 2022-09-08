#include<stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("Factorial of %d is %d",n,sum);
    return 0;
}