#include <stdio.h>
int main() {
    double num1, num2;
    char choice;

    printf("What do you want to perform?\n");
    printf("For Addition, press A.\nFor Multiplication, press M.\n");
    printf("For Subtraction, press S.\nFor Division, press D.\n");
    printf("Press: ");
    scanf(" %c", &choice);

    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 'A':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;