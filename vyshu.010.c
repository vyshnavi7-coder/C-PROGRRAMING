//program to read full name,gender,native place of a person.
#include<stdio.h>
main()
{
    char name,gender,place;

    printf("Enter your name: ");
    scanf("%c",&name);

    printf("Enter your gender (M/F): ");
    fflush(stdin);
    scanf("%c",&gender);

    printf("Enter your native_place: ");
    fflush(stdin);
    scanf("%c",&place);

    printf("\n name is: %s",name);
    printf("\n gender is: %c",gender);
    printf("\n native_place is: %s",place);

}
