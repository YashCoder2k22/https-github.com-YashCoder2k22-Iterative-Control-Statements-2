#include<stdio.h>
int main()
{
    int n,i=1,sum=0,x=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+x;
        i++;
        x=i*i;
    }
    printf("Sum is %d",sum);
    return 0;
}