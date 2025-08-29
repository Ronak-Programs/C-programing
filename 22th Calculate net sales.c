#include<stdio.h>
int main()
{
    float g_sal;
    printf("Enter the value of gross salary :\n");
    scanf("%f", &g_sal);

    float dcnt = g_sal*0.1;

    float n_sal;
    printf("Total value of net sales is : %f",g_sal - dcnt);

    return 0;
}
