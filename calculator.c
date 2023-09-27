#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(double a, double b);

int main() {

    int a;
    int b;
    int selection;

    printf("Select an operation: Addition = 1; Subtraction = 2; Multiplication = 3; Division = 4\n");
    scanf("%d", &selection);
    
    if (selection < 1 || selection > 4) {
        printf("Invalid operation selection.\n");
        return 1;
    }

    printf("Enter two whole numbers: ");
    
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1; 
    }

    switch (selection) {
        case 1:
            printf("%d\n", addition(a, b));
            break;
        case 2:
            printf("%d\n", subtraction(a, b));
            break;
        case 3:
            printf("%d\n", multiplication(a, b));
            break;
        case 4:
            if (b != 0) {
                printf("%lf\n", division(a, b));
            } else {
                printf("You cannot divide by ZERO!!!!!\n");
                return 1; 
            }
            break;
    }

    return 0;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}
