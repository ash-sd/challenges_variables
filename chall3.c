#include <stdio.h>
#include <stdlib.h>

int main ()

{
    float Meter;
    float Mile;
    float Km;




    printf("State the value in Meters:\n");
    scanf("%f", &Meter);

    Km = Meter/1000;
    Mile = Km*1.609;

    printf("%The value in miles is:f", Mile);

}
