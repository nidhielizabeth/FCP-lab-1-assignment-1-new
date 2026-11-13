#include <stdio.h>
     int main()
     {//find whether a number is even or odd
     int n;
     printf("Enter a Number: ");
     scanf(" %d", &n);

     if (n % 2 == 0)
     {
     printf("%d is even\n", n);
     }

     else
     {
      printf("%d is odd\n", n);
     }

     return 0;}
