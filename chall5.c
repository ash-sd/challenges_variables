#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int C;
    int F;

    printf("State the value in Fahrnheit: \n");
    scanf("%d", &F);

    C = (F-32)/1.8;

    printf("%d", C);

    if(C>0 && C<10){

        printf("Tres froid");
    }

    else if(C>10 && C<30){

        printf("froid");
    }

    else if (C>30 && C<50){

        printf("chaud");
    }
    else {

        printf("Tres chaud");
    }
    return 0;

}

