//This program is made by Vansh Bhatnagar
#include<stdio.h>
void great();
int main()
{
    great();
    return 0;
}
void great()
{
    int a, b, c;
    printf("Enter Value\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    if (a>b &&a>c)
    {
        printf("a is greatest\n");
    }
    else if (b>a &&b>c)
    {
        printf("b is greatest\n");
    }
    else
    {
        printf("c is greatest\n");
    }
}