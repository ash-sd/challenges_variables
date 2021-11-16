#include <stdio.h>

int main ()
{
    char myFirstName[20];
    char myLastName[20];
    int myAge;
    char myGender[20];
    int myPhoneNumber;

    printf("What is your first name? \n");
    scanf("%s", myFirstName);

    printf("What is your last name? \n");
    scanf("%s", myLastName);

    printf("How old are you? \n");
    scanf("%d", &myAge);

    printf("State your gender\n"),
    scanf("%s", myGender);

    printf("Enter your phone number\n");
    scanf("%d", &myPhoneNumber);

        printf("Your name is %s %s, %d Years old %s And your phone number is: %d", myFirstName, myLastName, myAge, myGender, myPhoneNumber);



}
