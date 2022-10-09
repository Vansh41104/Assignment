//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int Far;
    printf("Enter temperature in farenhiet\n");
    scanf("%d", &Far);
    int cel;
    cel=(Far-32)*5/9;
    printf("Temperature  in Farenhiet is %d \n", Far);
    printf("Temperature  in Celsius is %d \n", cel);
    return 0;
}