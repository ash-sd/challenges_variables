#include <stdio.h>
#include <stdlib.h>

int main()

{
    double a;
    double b;

    printf("Enter the value of a: \n");
    scanf("%lf", &a);

    printf("Enter the value of b: \n");
    scanf("%lf", &b);

    printf("Added:%f\n", a+b );
    printf("Muliplied:%f\n", a*b );
    printf("Divided:%f\n", a/b);
    printf("Percetage:%.2f\n", (a/100)*b);


    return 0;
}
