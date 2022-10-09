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
    int a;
    int b;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d\n", a,b);
    }
    else
    {
        printf("%d is grater than %d\n", b,a);
    }
}