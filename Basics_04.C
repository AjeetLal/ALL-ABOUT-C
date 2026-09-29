// IN THIS PROGRAN WE ARE TAKING THE OUTPUT FROM THE USER.
// DEMONSTRATING BASIC DATA TYPES AND USER INPUT.


#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;

    printf("enter the age\n");
    scanf("%d",&age);
    
    printf("enter the height\n");
    scanf("%f",&height);
   
    printf("enter the grade\n");
    scanf("%s",&grade);

    return 0;
}