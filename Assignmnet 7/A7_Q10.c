//This program is made by Vansh Bhatnagar
#include<stdio.h>
void triangle();
int main()
{
    triangle();
    return 0;
}
void triangle()
{
    int side1;
    int side2;
    int side3;
    printf("enter value of sides of triangle\n");
    scanf("%d", &side1);
    scanf("%d", &side2);
    scanf("%d", &side3);
    if (side1+side2<=side3)
    {
        printf("valid\n");
    }
    else
    {
        printf("not valid\n");
    }
}