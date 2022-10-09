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
    int a;
    printf("enter value\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive\n");
    }
    else if(a==0)
    {
        printf("0\n");
    }
    else
    {
        printf("Negative\n");
    }
}