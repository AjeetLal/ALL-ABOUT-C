 #include<stdio.h>
 int main()
 {
    int maths, physics, chemistry, total;

    printf("enter the marks of maths: ");
    scanf("%d" , &maths);

    printf("enter the marks of physics: ");
    scanf("%d" , &physics);

    printf("enter the marks of chemistry: ");
    scanf("%d" , &chemistry);

    total = maths + physics + chemistry ; 

    if(maths>= 60)
    {
        if(physics>= 50)
        {
            if(chemistry>= 40)
            {
                if (total>= 200)
                { 
                    printf("You are elegible for admission");
                }

                else {
                    printf("You are not elegible for admission");
                }
            }
                else {
                    printf("You are not elegible for admission");
                }
            }
                else {
                    printf("You are not elegible for admission");
                }
            }
          else{
            printf("You are not elegible for admission");
            }
     return 0;
 }