#include<stdio.h>
int main()
{
    int marks;

    printf("enter the marks: ");
    scanf("%d" , &marks);

    switch (marks / 10)
    {
        case 10:
        case 9:
        printf("Grade A");
        break;

        case 8:
        case 7:
        if(marks>= 75)
        printf("Grade B");

        else
        printf("Grade C");
        break ;

        case 6:
        printf("Grade C");
        break;

        default:
        printf("Grade D");

    }
    return 0;
}