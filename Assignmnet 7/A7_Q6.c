//This program is made by Vansh Bhatnagar
#include<stdio.h>
void oddeven();
int main()
{
    oddeven();
    return 0;
}
void oddeven()
{
    int a;
    printf("enter an integer\n");
    scanf("%d", &a);
    if(a %2==0 )
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}