#include <stdio.h>


int main()

{

    int num,a,b,c;

    printf("Enter a value:");
    scanf("%d",&num);

    a=((num %100)%10);
    b=((num%100)/10);
    c=num / 100;

    printf("The reversed value is:%d%d%d", a,b,c);



}
