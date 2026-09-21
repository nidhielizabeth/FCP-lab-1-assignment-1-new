#include <stdio.h>
       int main()
       {int h, m, s;
       printf("Enter hours, minutes, seconds: ");
       scanf("%d %d %d", &h,&m, &s);
       long total_sec = (h * 3600L) + (m + 60L) + s;
       printf("Total Seconds = %ld\n", total_sec);
       return 0;}
