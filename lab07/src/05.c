#include <stdio.h>

void print_id_card(char name[], char job[], int age);

int main()
{
    char name[100], job[100];
    int age;
    /* CODE HERE */
    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);
    print_id_card(name, job, age);
}

void print_id_card(char name[], char job[], int age) {
    printf("======================\n");
    printf("| %-18s |\n", name);
    printf("| ------------------ |\n");
    printf("| Age : %-12d |\n", age);
    printf("| Job : %-12s |\n", job);
    printf("======================\n");
}