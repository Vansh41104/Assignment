//This program is made by Vansh Bhatnagar
#include<stdio.h>
void divisible();
int main()
{
    divisible();
    return 0;
}
void divisible()
{
    int a;
    printf("enter an integer\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("divisible by 5\n");
    }
    else
    {
        printf("not");
    }
}