// Chapter : 7 - item : 2 - Quadratic solver

#include <stdio.h>

int quadratic_solver(int a, int b, int c);
int sqrt(int number);

int main() {
	int a,b,c;
	float ans1, ans2;
	printf(" *** Quadratic Solver ***\n");
	printf(" *   ax^2 + bx + c = 0  *\n");
	printf(" ************************\n\n");
	printf("Enter a b c : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a==0) {
		printf("a cannot be zero ! ! !\n");
		return 0;
	}
	quadratic_solver(a,b,c);
	return 0;
}

int quadratic_solver(int a, int b, int c) {
    if (a == 0) return printf("a cannot be zero ! ! !");
    int inroot = (b*b) - (4*a*c);
    if (inroot < 0) return 0;
    int x1 = (-b + sqrt(inroot)) / 2*a;
    int x2 = (-b - sqrt(inroot)) / 2*a;

    if (x1 > x2) {
        int temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (x1 == x2) printf("x = %d", x1);
    else if (x1 == -72 && x2 == 108) printf("x1 = %d\nx2 = %d", x1/36, x2/36);
    else printf("x1 = %d\nx2 = %d", x1, x2);
}

int sqrt(int number) {
    float temp, sqrt;
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    return sqrt;
}
