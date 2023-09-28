// Chapter : 7 - item : 3 - (43) ใส่ตัวแปรผิดชนิด

#include <stdio.h>
#include <string.h>

int char_to_int(char num[]);

int main()
{
    char num1[10], num2[10];
    printf("Enter 2 number : ");
    scanf("%s %s", &num1, &num2);

    int n1 = char_to_int(num1);
    int n2 = char_to_int(num2);
    
    /* CODE OUTPUT HERE */

    printf("%d x %d = %d\n", n1, n2, n1*n2);
}

int char_to_int(char num[])
{
    /* CODE FUNCTION HERE */
    int result = 0, 
    lenght = strlen(num);
    for(int i=0; i<lenght; i++){
		result = result * 10 + ( num[i] - '0' );
	}

    return result;
}