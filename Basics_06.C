// THIS IS THE SIMPLE PROGRAM OF SWAPPING TWO INTEGER VARIABLES.

#include<stdio.h>
int main()
{
    int a=10, b= 20, temp;

    printf("before swap: a = %d, b = %d\n" , a, b);
    
  // LOGIC USED IN SWAP
  
  temp = a; // TEMP STORES VALUE OF a
    a = b;        // NOW A STORES VALUE OF b
    b = temp;         // NOW b STORES TEMP (the orignal value of a)

    printf("after swap: a = %d, b = %d\n" , a, b);
   
   return 0;

  }