//this program is made by vansh bhatnagar
#include<stdio.h>
void oddevven();
int main()
{
	oddeven();
	return 0;
}
void oddeven()
{
	int a;
	printf("enter the value \n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even \n");
		if (a%2==0&&a%3==0)
		printf("divisible by 2 and 3 \n");
	}
	else if(a%1==0)
	{
		printf("odd \n");
		if(a%5==0)
		printf("divisible by 5 \n");
	}
}
