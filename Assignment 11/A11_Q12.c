#include <stdio.h>
int main ()
{
    int n,a,b;
    n=10;
    printf("enter an number\n");
    scanf("%d",&a);
    b=2*a;
    while(n>=0)
    {
        printf("the number is %d\n",b);
        b=b+2;
        n=n-1;
    }
}