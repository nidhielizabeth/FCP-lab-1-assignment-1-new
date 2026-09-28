#include <stdio.h>
     int main()
     {//Calculate the cut off mark of a student
     float m, p, c, e, cm;
     printf("Enter marks in Maths(/200), Physics(/200), Chemistry(/200), and Entrance(/100)");
     scanf("%f %f %f %f", &m, &p, &c, &e);
     cm = m / 2.0 + p / 2.0+ c / 2.0 + e;
     printf("Cut-off mark = %.2f/n", cm);
     return 0;}
