//This program is made by Vansh Bhatnagar
#include<stdio.h>
void great();
int main()
{
	great();
	return 0;
}
void great()
{
	int a, b;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d", &b);
	//int c;
	//c=a>b;	
	//int d;
	//d=b>a;
	if (a>b)
	{
		printf("a is greater than b \n");
	}

	else if(b>a)
	{
		printf("b is greater than a \n");
	}
	if(a>=500 && a<1000||b>=500 && b<1000)
	{
		printf("yes the greater number lies between 500 to 1000 \n");
	}
	else
	{
		printf("no the greater number does not lie between 500 to 1000 \n");
	}
}
