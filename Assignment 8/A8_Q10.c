//this program is made by vansh bhatnagar
#include<stdio.h>
void weekno();
int main()
{
    weekno();
    return 0;
}
void weekno()
{
    int a;
    printf("enter week number");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Monday");
    }
    else if(a==2)
    {
        printf("Tuesday");
    }
    else if(a==3)
    {
        printf("Wednesday");
    }
    else if(a==4)
    {
        printf("Thursday");
    }
    else if(a==5)
    {
        printf("Friday");
    }
    else if(a==6)
    {
        printf("Saturday");
    }
    else if(a==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Not Valid");
    }
}