//This program is made by Vansh Bhatnagar
#include<stdio.h>
void marks();
int main()
{
    marks();
    return 0;
}
void marks()
{
    int maxone;
    maxone=100;
    int total;
    total=5*maxone;
    int math, sci, soc, eng, hin;
    int max=100;
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
    int per;
    per=agg*100/total;
    printf("percentage are %d\n",per);
    int avgmarks;
    avgmarks=agg/5;
    printf("average marks are %d\n", avgmarks);
}