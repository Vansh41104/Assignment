//This program is made by Vansh Bhatnagar
#include <stdio.h>
int main()
{
    int dist;
    printf("Enter Distance between two cities\n");
    scanf("%d", &dist);
    printf("Distance between two cities is %d in kms\n", dist);
    int distm;
    distm=dist*1000;
    printf("Distance between two cities is %d in ms\n", distm);
    int distcm;
    distcm=dist*100000;
    printf("Distance between two cities is %d in cms\n", distcm);
    int distmm;
    distmm=dist*1000000;
    printf("Distance between two cities is %d in mms\n", distmm);
    return 0;
}