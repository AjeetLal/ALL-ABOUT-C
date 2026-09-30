/* PROGRAM THAT TAKES 2 NUMBERS FROM THE USER AND PRINTS 1 IF THE FIRST NUMBER IS GREATER THAN THE SECOND NUMBER.
  OTHERWISE IT WILL PRINT 0 */

#include<stdio.h>
int main()
{
  int a, b;

    printf("enter first number: \n");
    scanf("%d" , &a);

    printf("enter second number: \n");
    scanf("%d" , &b);

    printf("the result is %d" , (a>b) );

    return 0;

}