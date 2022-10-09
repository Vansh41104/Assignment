//This program is made by Vansh Bhatnagar
#include<stdio.h>
void math();
int main()
{
    math();
    return 0;
}
void math()
{
    int a;
    int b;
    int ifbut;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("enter a number between 0-4\n");
    scanf("%d",&ifbut);
    if (ifbut==1)
    {
        printf("sum of two numbers are %d\n", a+b);
    }
    else if(ifbut==2)
    {
        printf("Subtraction of two numbers are %d\n", a-b);
    }
    else if(ifbut==3)
    {
        printf("Multiply of two numbers are %d\n", a*b);
    }
    else if (ifbut==4)
    {
        printf("division of two numbers are %d\n", a/b);
    }
    else
    {
        printf("NO OPERATION");
    }

}