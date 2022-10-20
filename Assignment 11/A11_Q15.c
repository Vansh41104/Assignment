#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter the number to be squared\n");
    scanf("%d",&a);
    n=9;
    while(n>=0)
    {
        b=a*a;
        printf("the square of %d is %d\n",a,b);
        a=a+1;
        n=n-1;
    }
}