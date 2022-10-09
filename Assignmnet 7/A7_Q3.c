//This program is made by Vansh Bhatnagar
#include<stdio.h>
void success();
int main()
{
    success();
    return 0;
}
void success()
{
    int a;
    printf("enter a number between 0-100\n");
    scanf("%d",&a);
    if (a>=50 &&a<100)
    {
        printf("success\n");
    }
    else
    {
        printf("fail\n");
    }
}