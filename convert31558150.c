#include <stdio.h>
int main ()
     {//Convert 31558150 seconds to days,hours and minutes
     long sec = 31558150;
     long days = sec / (24 * 3600);
     long hours = sec / 3600;
     sec %= 3600;
     long minutes = sec / 60;
     long remaining_sec = sec / 60;
     printf("%ld Days, %ld hours, %ld seconds\n", days, hours, minutes, remaining_sec);
     return 0;}
