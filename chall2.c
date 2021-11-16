#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int C;
    int F;

    printf("State a value of the temperature in celsius:\n");
    scanf("%d", &C);

    F = (C*1.8)+32;

    printf("%d", F);



}
