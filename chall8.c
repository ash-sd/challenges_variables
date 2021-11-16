#include <stdio.h>
#include <stdlib.h>

int main()

{

    int a;
    int b;
    int c;
    float ttl;
    float avg;


    printf("Enter the value of a: \n");
    scanf("%d",&a);

    printf("Enter the value of b: \n");
    scanf("%d",&b);

    printf("Enter the value of c: \n");
    scanf("%d",&c);

    ttl = (a+b+c);
    avg = ttl/3;

    printf("The total is:%.2f \n",ttl);
    printf("The average is:%2f \n",avg);

    return 0;
}
