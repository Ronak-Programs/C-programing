#include<stdio.h>

int main()
{
    float period = 12;
    float rate = 2;
    float net_amnt = 100;

    float interest = (period*rate*net_amnt)/100;

    printf("Total interest is : %f", interest);

    return 0;
}
