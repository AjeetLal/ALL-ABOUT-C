// A PROGRAM IN WHICH WE TAKES TWO NUMBERS FROM THE USER AND PRINTS THE LARGER ONE BY USING IF-ELSE STATEMENTS.

#include<stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d" "%d" , &a, &b);

    if(a>b){
        printf("The larger number is %d" ,a);
    }
     else {
        printf("The larger number is %d" ,b);
     }
     return 0;
}