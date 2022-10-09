//This program is made by Vansh Bhatnagar
#include<stdio.h>
void days();
int main()
{
    days();
    return 0;
}
void days()
{
    int months;
    printf("enter months\n");
    scanf("%d",months);
    int day;
    day=months*0.032855;
    printf("no of days in %d is %d\n",months, day);
}