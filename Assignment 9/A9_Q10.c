// this program is made by vansh bhatnagar
#include<stdio.h>
void bill();
int main()
{
    bill();
    return 0;
}
void bill()
{
    int a;
    printf("Enter the number of units \n");
    scanf("%d",&a);
    if(a<=50)
    {
        int b=a*0.50;
        printf("the cost will be %d",b);
    }
    else if(a<=100)
    {
        int c=a*0.75;
        printf("the cost will be %d",c);
    }
    else if(a<=200)
    {
        int d=a*1.20;
        printf("the cost will be %d",d);
    }
    else if(a>250)
    {
        int e=a*1.50;
        printf("the cost will be %d",e);
    }
}