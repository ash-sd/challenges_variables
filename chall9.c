#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{

    float x1,y1;
    float x2,y2;
    float MN;

    printf("Enter the value of x1:\n");
    scanf("%f", &x1);
    printf("Enter the value of y1:\n");
    scanf("%f", &y1);
    printf("Enter the value of x2:\n");
    scanf("%f", &x2);
    printf("Enter the value of y2:\n");
    scanf("%f", &y2);

    MN = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("The distance between M and N is 'MN:%f", MN);


    return 0;
}
