#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks between 0 to 100 = ");
    scanf("%d",&marks);

    if(marks >= 70)
    {
        printf("Student grade = distinction");
    }
    else if(marks >= 60)
    {
        printf("Student grade = first");
    }
    else if(marks >= 50)
    {
        printf("Stundent grade = second");
    }
    else if(marks >= 35)
    {
        printf("Stundent grade = third class");
    }
    else
    {
        printf("FAIL!!");
    }

    return 0;
}
