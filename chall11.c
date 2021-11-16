#include <stdio.h>
#include <stdlib.h>


int main ()

{
    float circ;
    float l,w;

    printf("Enter the lenght of the rectangle:\n");
    scanf("%f",&l);
    printf("Enter the width of the rectangle:\n");
    scanf("%f",&w);

    circ = 2*(l+w);

    printf("The circumference of the rectangle is:%f",circ);

    return 0;
}
