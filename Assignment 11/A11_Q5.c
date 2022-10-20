//this program is made by vansh bhatnagar
#include<stdio.h>
int main()
{
    int choose;
    printf("enter the choise\n");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
    {
        int a=2,b=4,sum;
        sum=a+b;
        printf("the sum is %d",sum);
        break;
    }
    case 2:
    {
        int a=4,b=5,sum;
        sum=a+b;
        printf("the sum is %d",sum);
        break;
    }
    case 3:
    {
        int a=10,b=20,sum;
        sum=a+b;
        printf("the sum is %d",sum);
        break;
    }
    default:
    {
        printf("did not match");
    }
    }
}