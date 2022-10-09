//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int fir,sec,thir;
    printf("Enter value of first side\n");
    scanf("%d", &fir);
    printf("Enter value of second side\n");
    scanf("%d", &sec);
    printf("Enter value of third side\n");
    scanf("%d",&thir);
    int peri;
    peri=fir+sec+thir;
    printf("perimeter of triangle is %d\n", peri);
    return 0;
}