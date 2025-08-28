  #include<stdio.h>
  int main()
  {
      float feh;
      printf("Enter the value of fahrenheit : ");
      scanf("%f",&feh);

      float cel = (0.56)*(feh-32);
      printf("value of celsius is : %f", cel);

      return 0;
  }

