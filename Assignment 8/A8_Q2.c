//This program is made by Vansh Bhatnagar
#include<stdio.h>
void pass();
int main()
{
    pass();
    return 0;
}
void pass()
{
    int a,b,c,d,e;
    int max=100;
    printf("Enter Marks\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    int obt;
    obt=a+b+c+d+e;
    int total=5*max;
    int per;
    per= obt*100/total;
    if(per>=33)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

}