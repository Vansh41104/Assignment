//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int basicpay;
    printf("enter basic pay\n");
    scanf("%d",&basicpay);
    int dear;
    dear=basicpay*40/100;
    int rent;
    rent=basicpay*20/100;
    printf("basic pay is %d\n", basicpay);
    printf("Dearness allowance is %d\n", dear);
    printf("Rent allowance is %d\n", rent);
    return 0;
}