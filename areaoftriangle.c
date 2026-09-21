#include <stdio.h>
int main()
     {//calculate area of a triangle
     float Base, Height, Area;
     printf("Enter Base and Height: ");
     scanf("%f %f", &Base, &Height);
     Area = 0.5 * Base * Height;
     printf("Area of the triangle is = %.2f\n", Area);
     return 0;}
