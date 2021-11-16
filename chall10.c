#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r ;
    float area;
    const float pi = 3.14;

    printf("Enter radius:\n");
    scanf("%f",&r);

    area=r*2*pi;
    printf("Area of cicle:%.2f\n",area);


    return 0;
}
