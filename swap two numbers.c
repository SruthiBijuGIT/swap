#include <stdio.h>

int main() {
  
  int a,b,temp;
  printf("Enter a");
  scanf("%d",&a);
  printf("Enter b");
  scanf("%d",&b);
  temp=a;
  a=b;
  b=temp;
  printf("\n first number=%d",a);
  printf("\n second number=%d",b);
  
  return 0;
}
