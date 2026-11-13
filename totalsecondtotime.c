#include <stdio.h>
       int main()
       {//Read total second and convert it into time
       long total_sec, h, m, s;
       printf("Enter Total Seconds: ");
       scanf("%ld", &total_sec);
       h = total_sec / 3600;
       m = (total_sec % 3600) / 60;
       s = total_sec % 60;
       printf("time = %02ld:%02ld:%02ld\n", h, m, s);
       return 0;
       }
