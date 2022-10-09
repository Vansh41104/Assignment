//This program is made by Vansh Bhatnagar
#include <stdio.h>
void distance();
int main()
{
    distance();
    return 0;
}
void distance()
{
    int dist;
    printf("Enter Distance between two cities\n");
    scanf("%d", &dist);
    printf("Distance between two cities is %d in kms\n", dist);
    int distcm;
    distcm=dist*100000;
    printf("Distance between two cities is %d in cms\n", distcm);
    int distmm;
    distmm=dist*1000000;
    printf("Distance between two cities is %d in mms\n", distmm);
    int distin;
    distin=dist*39370;
    printf("Distance between two cities is %d in inches\n", distin);
}