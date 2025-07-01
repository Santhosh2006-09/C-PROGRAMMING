#include <stdio.h>
#include <math.h>
int main() {
  int  unitconsumed, costperunit, totalcost;
  scanf("%d", &unitconsumed);
  scanf("%d", &costperunit);
  totalcost = (int)pow(unitconsumed,costperunit);
  printf("%d", totalcost);
  return 0;
}