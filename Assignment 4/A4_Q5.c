//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int basic;
    printf("Ramesh's Basic Pay \n");
    scanf("%d", &basic);
    printf("Ramesh's Basic Pay is %d\n", basic);
    int dear;
    dear=basic*40/100;
    printf("his dearness alowwance will be %d\n", dear);
    int total;
    total=basic+dear;
    printf("Total Salary will be %d\n", total);
}