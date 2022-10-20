#include<stdio.h>
int main()
{
    int n=10,a,b;
    printf("enter a value\n");
    scanf("%d",&b);
    for(a=1;a<=n;a++)
    {
        printf("the value is %d \n",b);
        b=b-1;
    }
}