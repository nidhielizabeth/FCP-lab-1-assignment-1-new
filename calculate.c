#include<stdio.h>
int main()
     {//Calculate Simple intrest
     float p, r, t, si;
     printf("Enter Principal: ");
     scanf("%f", &p);
     printf("Enter rate: ");
     scanf("%f", &r);
     printf("Enter time: ");
     scanf("%f", &t);
     si = (p*r*t)/100;
     printf("Simple intrest is = %.2f\n", si);
     return 0;}

