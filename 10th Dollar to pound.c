#include<stdio.h>

int main(){

    float dollar,pound;

    printf("Enter amount in dollar");
    scanf("%f", &dollar);

    pound=(dollar*48)/ 70 ;

    printf("%.2f Dollar = %.2f Pound\n", dollar,pound);
    return 0;
}
