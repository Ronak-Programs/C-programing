#include<stdio.h>
int main()
{
    int maths,phy,chem;

    printf("Enter the marks of maths : ");
    scanf("%d",&maths);

    printf("Enter the marks of physics :");
    scanf("%d",&phy);

    printf("Enter the marks of chemistry :");
    scanf("%d",&chem);

    int total;
    printf("Total marks of Three Subject : %d\n",maths+phy+chem);

    int ave;
    printf("avrage of three subject marks is : %d\n", (maths+phy+chem)/3);

    if(ave >= 70)
    {
        printf("Student grade = distinction");
    }
    else if(ave >= 60)
    {
        printf("Student grade = first");
    }
    else if(ave >= 50)
    {
        printf("Stundent grade = second");
    }
    else if(ave >= 35)
    {
        printf("Stundent grade = third class");
    }
    else
    {
        printf("FAIL!!");
    }

    return 0;
}
