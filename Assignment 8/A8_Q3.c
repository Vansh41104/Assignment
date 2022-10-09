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
    printf("enter value\n");
    scanf("%d", &a);
    if(a%6==0)
    {
        printf("Divisible by 2 and 3\n");
    }
    else
    {
        printf("Not Divisible\n");
    }
}