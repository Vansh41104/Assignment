#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter how many times you want to loop\n");
    scanf("%d",&n);
    printf("enter a value\n");
    scanf("%d",&b);
    for(a=1;a<=n;a++)
    {
        printf("the value is %d \n",b);
        b=b-1;
    }
}