/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include <stdio.h>

// Function declarations
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float div(int num1, int num2);

int main() {
    int num1, num2;
    int ans;
    float result;
    char choice;

    // Display menu
    printf("\n MENU");
    printf("\n '+' Addition ");
    printf("\n '-' Subtraction ");
    printf("\n '*' Multiplication ");
    printf("\n '/' Division ");
    printf("\n Enter your choice = ");
    scanf(" %c", &choice);  // Note the space before %c to consume any leftover whitespace

    printf("\n Enter the num1 = ");
    scanf("%d", &num1);
    printf("\n Enter the num2 = ");
    scanf("%d", &num2);

    // Switch case to perform the chosen operation
    switch (choice) {
        case '+':
            ans = add(num1, num2);
            printf("\n Addition is %d ", ans);
            break;

        case '-':
            ans = sub(num1, num2);
            printf("\n Subtraction is %d ", ans);
            break;

        case '*':
            ans = mul(num1, num2);
            printf("\n Multiplication is %d ", ans);
            break;

        case '/':
            if (num2 != 0) {
                result = div(num1, num2);
                printf("\n Division is %.2f ", result);
            } else {
                printf("\n Error: Division by zero ");
            }
            break;

        default:
            printf("\n Invalid input ");
            break;
    }

    return 0;
}

// Function definitions
int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

float div(int num1, int num2) {
    return (float)num1 / num2;
}
