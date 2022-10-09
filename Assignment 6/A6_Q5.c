//This program is made by Vansh Bhatnagar
#include<stdio.h>
void natural();
int main()
{
    natural();
    return 0;
}
void natural()
{
    int n;
    printf("enter value\n");
    scanf("%d", &n);
    int n1=n-n+1;
    int n2=n-n+2;
    int n3=n-n+3;
    int n4=n-n+4;
    int n5=n-n+5;
    printf("%d, %d, %d, %d, %d, %d",n1,n2,n3,n4,n5,n);
}