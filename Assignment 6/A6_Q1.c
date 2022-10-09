//This program is made by Vansh Bhatnagar
#include<stdio.h>
void rectangle();
void square();
void circle();
int main()
{   rectangle();
    square();
    circle();
    return 0;}

void rectangle()
{   int l;
    int b;
    printf("length of rectangle \n");
    scanf("%d", &l);
    printf("breadth of rectangle \n");
    scanf("%d",&b);
    int area1;
    area1 = l*b;
    int peri1;
    peri1 = 2*l+2*b;
    printf("length of rectangle is %d \n", l);
    printf("breadth of rectangle is %d \n",b);
    printf("The area of rectangle is %d \n", area1);
    printf("The perimeter of the reactange is %d \n", peri1);}

void square()
{   int a;
    printf("side of square \n");
    scanf("%d", &a);
    int area2;
    area2 = a*a;
    int peri2;
    peri2 = 4*a;
    printf("sides of the square is %d \n", a);
    printf("the area of square is %d \n", area2);
    printf("the perimeter of square is %d \n", peri2);}

void circle()
{   int r;
    printf("radius of circle \n");
    scanf("%d",&r);
    int area3;
    area3 = 3*r*r;
    int circumference;
    circumference = 2*3*r;
    printf("radius of circle is %d \n", r);
    printf("the area of circle is %d \n", area3);
    printf("the circumference of circle is %d", circumference);}
