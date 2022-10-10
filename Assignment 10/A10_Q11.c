//this program is made by vansh bhatnagar
#include<stdio.h>
//convert farheniet to celcius
int main()
{
    int farh,cel;
    printf("enter temperature in farheniet\n");
    scanf("%d",&farh);
    cel=5/9*(farh-32);
    printf("temperature in celsius is = %d\n",cel);
    cel=5*(farh-32)/9;
    printf("temperature in celsius is = %d\n",cel);
    cel=5.0/9*(farh-32);
    printf("temperature in celsius is = %d\n",cel);
    return 0;
}
/*enter temperature in farheniet
100
temperature in celsius is = 0
temperature in celsius is = 37
temperature in celsius is = 37*/