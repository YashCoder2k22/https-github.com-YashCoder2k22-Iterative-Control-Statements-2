#include<stdio.h>
int main()
{
    int n,rem,count=0;
    printf("Enter a Number");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    printf("Number of digits is %d",count);
    return 0;

}