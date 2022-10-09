//This program is made by Vansh Bhatnagar
#include<stdio.h>
void roots();
int main()
{
    roots();
    return 0;
}
void roots()
{
    int d;
    printf("enter value of discriminant\n");
    scanf("%d",&d);
    if (d>0)
    {
        printf("Real and Distinct\n");
    }
    else if (d==0)
    {
        printf("Real and equal\n");
    }
    else
    {
        printf("imaginary roots\n");
    }
}
