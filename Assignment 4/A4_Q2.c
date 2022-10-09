//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter value for a\n");
    scanf("%d", &a);
    printf("enter value for b\n");
    scanf("%d", &b);
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n",b);
    int min;
    min=a-b;
    printf("subtraction of a and b is %d\n", min);
    return 0;
}