#include <stdio.h>
int main() {
  int a, b, c;
  printf("input the first number");
  scanf("%d",&a);
  printf("input the seconf number");
  scanf("%d",&b);
  printf("Before swapping: a =%d, b=%d \n", a, b);
  c=a;
  a=b;
  b=c;
  printf("After swapping: a =%d, b=%d \n", a, b);
  return 0;
}
