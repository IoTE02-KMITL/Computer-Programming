#include <stdio.h>

int main(void) {
  char x;
  printf("Enter Alphabet : ");
  scanf("%c", &x);

  if (x == 'B') printf("YES\n");
  else printf("NO\n");
  
  return 0;
}