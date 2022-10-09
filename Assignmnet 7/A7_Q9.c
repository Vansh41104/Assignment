//This program is made by Vansh Bhatnagar
#include<stdio.h>
void proloss();
int main()
{
    proloss();
    return 0;
}
void proloss()
{
    int cost;
    int sell;
    printf("Enter cost price\n");
    scanf("%d",&cost);
    printf("Enter selling price\n");
    scanf("%d",&sell);
    int profit;
    profit= sell-cost;
    int proper;
    proper= profit*100/cost;
    printf("profit percentage is %d\n",proper);
    int loss;
    loss= cost-sell;
    int lossper;
    lossper= loss*100/cost;
    printf("loss percentage is %d\n", lossper);
}