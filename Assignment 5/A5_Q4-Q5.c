//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int side;
    printf("Enter side of square\n");
    scanf("%d", &side);
    int area;
    area=side*side;
    int peri;
    peri=4*side;
    printf("area of square is %d\n", area);
    printf("The Perimeter of square is %d\n", peri);
    return 0;
}