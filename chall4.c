#include <stdio.h>
#include <stdlib.h>

int main ()

{
    float meter;
    float mile;
    float km;

    printf("State the value in Miles: \n");
    scanf("%f", &mile);

    meter = mile*1609;
    km = meter/1000;

    printf("The value in km is:%f", km);

    return 0:
}
