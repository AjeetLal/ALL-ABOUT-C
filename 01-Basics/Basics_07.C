// A BASIC PROGRAM THAT TAKES THE INPUT FROM THE USER AND PERFORMS BASIC ARITHMETIC OPERATIONS.

#include <stdio.h>
int main()
{
    int a, b; 
   // TWO NUMBERS AS INPUT
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
  
     // PERFPRMING BASIC ARITHEMETIC OPERATIONS
    printf("Addition = %d\n", a+b);

    printf("Substraction = %d\n", a-b);
    
    printf("Multiplication = %d\n", a*b);
    
    printf("Division = %d\n", a/b);
    
    printf("Remainder = %d\n", a%b);

    return 0;
}