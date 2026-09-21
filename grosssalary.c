#include <stdio.h>
int main()
{//Calculate gross salary
      float basic, hra, da, gross;
      printf("Enter Basic Salary: ");
      scanf("%f", &basic);
      hra = 0.20 * basic; // 20% HRA
      da = 0.40 * basic; // 40% DA
      gross = basic + hra + da;
      printf("Gross Salary = %.2f\n", gross);
      return 0;
      }
