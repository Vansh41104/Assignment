//this program is made by vansh bhatnangar
#include<stdio.h>
int main()
{
    printf("enter number of times you want to loop\n");
    scanf("%d",&n);
    while(n>0)
    {
        printf("Hello World\n",n);
        n=n-1;
    }
}