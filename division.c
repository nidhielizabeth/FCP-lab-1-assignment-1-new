#include <stdio.h>
     int main()
     {float m1,m2, m3, m4, m5, total, per;
     printf("Enter marks for 5 subjects: ");
     scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
     total = m1 + m2 + m3 + m4 + m5;
     per = total / 5.0;
     if (per >= 60)
     {
     printf("First division (%.2f\n)",per);
     }

     else if (per >= 50)
     {
     printf("Second division (%.2f\n)",per);
     }
     else if (per >= 40)
     {
     printf("Third division (%.2f\n)",per);
     }
     else
     {
     printf("Fail(%.2f\n)",per);
     }
     return 0;
     }
