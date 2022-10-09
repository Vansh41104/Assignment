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
    printf("enter values\n");
    scanf("%d",&a);
    if(a%3==0 )
    {
        printf("Divisible with 3\n");
    }
    else if(a%7==0)
    {
        printf("Divisible with 7\n");
    }
    else
    {
        printf("Not Divisible\n");
    }
}
