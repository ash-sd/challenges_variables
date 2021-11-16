#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    int C;

    printf("State the value in Fahrenheit: \n");
    scanf("%d", &F);

    C = (F-32)/1.8;
    printf("%d", C);

    return 0;
}
