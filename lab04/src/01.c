#include <stdio.h>

int main(void) {
  int num;
  printf(" *** three times table ***\n");
  printf("Enter an integer : ");
  scanf("%d", &num);

  if (num % 3 == 0) printf("%d is divisible by 3.\n", num);
  else printf("%d is not divisible by 3.\n", num);
  
  return 0;
}