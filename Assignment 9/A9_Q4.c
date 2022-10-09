//this program is made by vansh bhatnagar
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
	printf("enter the value \n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Positive \n");
		if(num%10==0)
		printf("divisible by 10 \n");
	}
	else if (num==0)
	{
		printf ("0 \n");
	}
	else
	{
		printf("negtive \n");
	}
}
