#include<stdio.h>
int main()
{
    int a,n;
    printf("enter how many times you want to loop the program \n");
    scanf("%d",&n);
    printf("enter a value\n");
    scanf("%d",&a);
    while(n>=0)
    {
        printf("the naturl number is %d\n",a);
        a=a-1;
        n=n-1;
    }
}