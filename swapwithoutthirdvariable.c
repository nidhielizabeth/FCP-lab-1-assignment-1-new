#include <stdio.h>
int main()
     {//swap two variables without using the third variable
     int a, b;
     printf("Enter two numbers: ");
     scanf("%d %d", &a, &b);
     a = a + b;
     b = a - b;
     a = a - b;
     printf("After Swap; a = %d, b = %d", a, b);
     return 0;}
