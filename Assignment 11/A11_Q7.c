//this program is made by vansh bhatnagar
#include<stdio.h>
int main()
{int a,b,c;
printf("enter a value\n");
scanf("%d",&a);
printf("the number entered is %d \n",a);
b=a%10;
printf("the units digit is %d\n",b);
c=10-b;
a=a+c;
printf("the round off will be %d",a);   
}