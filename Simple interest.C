#include <stdio.h>

int main(void) {
 float p,r,t,i;
  printf("enter p,r,and t:");
  scanf("%f %f %f ",&p,&r,&t);
  i=(p*r*t)/100;
  printf("simple intrest=%.2f\n",i);
  return 0;
}
