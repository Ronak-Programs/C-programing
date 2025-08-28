#include<stdio.h>
int main()
 {
     float g_sal;

     printf("Enter the value of gross salary:\n");
     scanf("%f", &g_sal);

     float allo = g_sal*0.1;
     float ded = g_sal*0.03;

     float n_sal = g_sal + allo - ded;

     printf("Total net salary = %f", n_sal);

 }
