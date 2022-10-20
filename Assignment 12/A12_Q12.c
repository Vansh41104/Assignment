#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("enter how many times you want to loop the program \n");
    scanf("%d",&n);
    printf("enter a value\n");
    scanf("%d",&b);
    c=1;
    for (a=1;a<=n;a++)
    {   
        d=a*b;
        printf("the value is %d \n",d);
        c=c+1;
    }
}