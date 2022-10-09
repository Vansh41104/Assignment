//This program is made by Vansh Bhatnagar
#include<stdio.h>
void posneg();
int main()
{
    posneg();
    return 0;
}
void posneg()
{
    int num;
    printf("enter an interger\n");
    scanf("%d", &num);
    if (num>=0)
    {
        printf("positive number\n");
    }
    else 
    {
        printf("Negative number\n");
    }
}