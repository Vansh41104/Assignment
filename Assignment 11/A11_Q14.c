#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("enter a value \n");
    scanf("%d",&a);
    n=9;
    b=1;
    while(n>=0)
    {   
        c=a*b;
        printf("%d \n",c);
        b=b+1;
        n=n-1;
    }
}