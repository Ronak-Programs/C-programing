#include<stdio.h>;
int main()
{
    int a,b,c;

    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("before swapping : a = %d , b = %d\n",a,b);

    c = b;
    b = a;
    a = c;

    printf("after swapping : a = %d , b = %d\n",a,b);

    return 0;
}
