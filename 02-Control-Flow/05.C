#include<stdio.h>
int main()
{
    int year;

    printf("enter the year: ");
    scanf("%d" , &year);

    if (year % 4 == 0 ) {
        printf("The year is Leap year");
    }

    else{
        printf("The year is not a Leap Year");
    }
    return 0; 
}