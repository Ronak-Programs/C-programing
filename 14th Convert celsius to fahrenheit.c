#include<stdio.h>
int main()
{
    float cel;
    printf("Enter the value of Celsius :  ");
    scanf("%f",&cel);

    float feh = (9/5*cel)+32;
    printf("Enter the fahrenheit : %f",feh);

    return 0;
}
