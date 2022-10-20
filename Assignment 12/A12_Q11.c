#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("enter how many times you want to loop the program \n");
    scanf("%d",&n);
    printf("enter an odd value\n");
    scanf("%d",&c);
    d=2*c;
    for(a=1;a<=n;a++)
    {
        printf("the number is %d \n",d);
        d=d-2;
    }

}