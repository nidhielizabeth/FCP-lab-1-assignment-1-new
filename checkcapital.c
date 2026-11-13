#include <stdio.h>
     int main()
     {//Check Capital,Small,Digit or Special Symbol
     char ch;
     printf("Enter a character: ");
     scanf(" %c", &ch);
     if (ch >= '0' && ch<= 'z')
    {
     printf("Small case letter\n");
    }
     else if (ch >= 'a' && ch <= '9')
    printf("Digit\n");
     else printf("Special Symbol\n");
     return 0;
     }
