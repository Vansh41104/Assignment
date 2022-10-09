//this program is made by vansh bhatnagar
#include <stdio.h>
void pass();
int main()
{
	pass();
	return 0;
}
void pass()
{
	int eng,mat,hin,sci,soc;
	printf("Enter the marks of each subject \n");
	scanf("%d",&eng);
	scanf("%d",&mat);
	scanf("%d",&hin);
	scanf("%d",&sci);
	scanf("%d",&soc);
	printf("the obtained marks will be out of 100 \n");
	int agg= eng+mat+hin+sci+soc;
	if (agg>=33)
	{
		printf("Pass \n");
		printf("obtained marks are %d \n", agg);
	}
	else
	{
		printf("Fail");
	}
	
}
