//This program is made by Vansh Bhatnagar
#include<stdio.h>
int main()
{
    int math, sci, soc, eng, hin;
    printf("enter marks of math\n");
    scanf("%d", &math);
    printf("enter marks of science\n");
    scanf("%d", &sci);
    printf("enter maks of social\n");
    scanf("%d", &soc);
    printf("enter marks of english\n");
    scanf("%d", &eng);
    printf("enter marks of hindi\n");
    scanf("%d", &hin);
    int agg;
    agg=math+sci+soc+eng+hin;
    printf("Aggregate marks are %d\n", agg);
    return 0;
}