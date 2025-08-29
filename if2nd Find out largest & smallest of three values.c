#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three values : ");
    scanf("%d %d %d",&a,&b,&c);

    if( a > b && a > c)
        printf("Largest number is : %d\n",a);
    else if( b > c && b > a)
        printf("Largest number is : %d\n",b);
    else if( c > a && c > b)
        printf("Largest number is : %d\n",c);
    if( a < b && a < c)
        printf("Smallest number is : %d\n",a);
    else if( b < c && b < a)
        printf("Smallest number is : %d\n",b);
    else if( c < a && c < a)
        printf("Smallest number is : %d\n",c);
    else
        printf("All number are equal!!");

    return 0;
}
