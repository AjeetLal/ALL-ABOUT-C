#include<stdio.h>
int main()
{
    int marks;

    printf("enter the marks: ");
    scanf("%d" , &marks);

    if(marks>=90){
        printf("Grade A");
    }

    else if(marks>= 75){
        printf("Grade B");
    }

    else if(marks>= 60){
        printf("Grade C");
    }

    else{
        printf("Grade D");
    }
}
