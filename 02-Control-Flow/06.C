#include<stdio.h>
int main()
{
    char X ;

    printf("enter the character: ");
    scanf("%c",&X);

    if(X == 'a' || X == 'e' || X == 'i' || X == 'o' || X == 'u' || 
        X == 'A' || X == 'E' || X == 'I' || X == 'O' || X =='U')
    {
        printf("Vowel");
    }

        else if( (X >= 'a' && X <= 'z' ) || ( X >= 'A' && X >= 'Z') ) {
            printf("Consonant");

        }
       
        else if ( X >= '0' && X <= '9'){
            printf("Digit");
        }
         
        else {
            printf("Special Character");

        }

    return 0;
    }
