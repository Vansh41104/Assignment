//This program is made by Vansh Bhatnagar
#include <stdio.h>
void math();
int main()
{
    math();
    return 0;

}
void math()
{
    int one;
    int two;
    printf("Enter value of one\n");
    scanf("%d",&one);
    printf("enter value of two\n");
    scanf("%d",&two);
    int add;
    add=one+two;
    int sub;
    sub=one-two;
    int mul;
    mul=one*two;
    int div;
    div=one /two;
    printf("sum of two numbers are %d\n", add);
    printf("subtraction of two numbers are %d\n", sub);
    printf("multiplication of of two numbers are %d\n", mul);
    printf("division of two numbers are %d\n", div);
}