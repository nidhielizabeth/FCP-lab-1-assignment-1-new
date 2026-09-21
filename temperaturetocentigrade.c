#include <stdio.h>
int main()
     {float f, c;
     printf("Enter temperature in Farenheit: ");
     scanf("%f", &f);
     c = (f - 32) * 5.0 / 9.0;
     printf("Temperature in centigrade is: %.2f\n", c);
     return 0;}
