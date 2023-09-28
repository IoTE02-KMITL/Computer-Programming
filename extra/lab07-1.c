// Chapter : 7 - item : 1 - หาค่า Max รับจำนวนเต็ม 4 จำนวน

#include <stdio.h>

int findmax(int num1,int num2);
int main() {
  	int a,b,c,d;
  	printf(" *** Find max value of 4 inputs ***\n");
   	printf("Enter 4 integers : ");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	printf("The maximum number is %d\n",findmax(findmax(a,b),findmax(c,d)));
	return 0;
}

int findmax(int num1, int num2) {
    if (num1 > num2) return num1;
    return num2;
}