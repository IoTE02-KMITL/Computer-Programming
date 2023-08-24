#include <stdio.h>

int main(void) {
  int num, reward = 0, first3, last3, last2;
  printf(" *** Lottery ***\n");
  printf("Ticket Number : ");
  scanf("%d", &num);

  first3 = num / 1000;
  last3 = num % 1000;
  last2 = num % 100;

  if (first3 == 367 || first3 == 653) {
    printf("You Won! [The first three digits]\n");
    reward += 4000;
  }
  if (last3 == 566 || last3 == 878) {
    printf("You Won! [The last three digits]\n");
    reward += 4000;
  }
  if (last2 == 15) {
    printf("You Won! [The last two digits]\n");
    reward += 2000;
  }

  if (reward > 0)
    printf("You get %d Baht.\n", reward);
  else
    printf("Sorry, you didn't win this time.\n");
  return 0;
}