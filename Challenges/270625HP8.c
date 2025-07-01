#include <stdio.h>
#include <math.h>
int main() {
  float B, LS, minrs, maxrs;
  scanf("%f %f", &B, &LS);
  minrs = sqrt((double)(LS * LS - B * B));  
  maxrs = sqrt((double)(LS * LS + B * B));  
  printf("%.5lf %.5lf\n", minrs, maxrs);
  return 0;
}