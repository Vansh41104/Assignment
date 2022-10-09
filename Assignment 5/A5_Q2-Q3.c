//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int l;
    int b;
    printf("Enter length of rectangle\n");
    scanf("%d", &l);
    printf("Enter breadth of rectangle\n");
    scanf("%d", &b);
    int area;
    area=l*b;
    int peri;
    peri=2*(l+b);
    printf("the area of rectangle is %d\n",area);
    printf("the perimeter o rectangleis %d\n",peri);
    return 0;
}