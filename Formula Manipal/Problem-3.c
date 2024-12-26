// problem-3
#include <stdio.h>
int main()
{
  int unitsUsed, totalBill;
  printf("Enter the number of units used: ");
  scanf("%d", &unitsUsed);
  if (unitsUsed <= 100)
  {
    totalBill = unitsUsed * 5;
  }
  else if (unitsUsed <= 300)
  {
    totalBill = 100 * 5 + (unitsUsed - 100) * 10;
  }
  else if (unitsUsed > 300)
  {
    totalBill = 100 * 5 + 200 * 10 + (unitsUsed - 300) * 15;
  }
  printf("The total bill is %d", totalBill);
  return 0;
}