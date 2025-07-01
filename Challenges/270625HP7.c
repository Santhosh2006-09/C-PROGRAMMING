#include <stdio.h>
int main() {
  int billamt, amtgiven;
  scanf("%d\n", &amtgiven);
  scanf("%d", &billamt);
  printf("Quotient: %d\n", amtgiven / billamt);
  printf("Remainder: %d\n", amtgiven % billamt);
  return 0;
}