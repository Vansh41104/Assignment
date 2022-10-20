#include<stdio.h>
int main()
{
    int a,n;
    printf("enter how many times you want to loop the program\n");
    scanf("%d",&n);
    printf("enter a value \n");
    scanf("%d",&a);
    printf("the value entered is %d\n",a);
    while(n>=0)
    {
        printf("the natural number is %d \n",a);
        a=a-1;
        n=n-1;
        
    }
}