#include <stdio.h>

// Function Prototypes for Math Operations
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(double a, double b);

int main() {

	// Declares variables for user's desired operation and their numbers entered
    int a;
    int b;
    int selection;

    // Prompts user to input their selection and stores the value in selection variable
    printf("Select an operation: Addition = 1; Subtraction = 2; Multiplication = 3; Division = 4\n");
    scanf("%d", &selection);
    
    // Input validation - if selection is not 1 through 4, output an error and end program
    if (selection < 1 || selection > 4) {
        printf("Invalid operation selection.\n");
        return 1;
    }

    // Prompts user to input two numbers. If they are not in the format descibed in scanf, output an error and end program
    printf("Enter two whole numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1; 
    }

    // Switch statements used to output value of function call based on user's selection value
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
        	// If statement used to prevent division by zero - i.e. function is called only if b is not 0. 
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

// Function that adds two integers
int addition(int a, int b) {
    return a + b;
}

// Function that subtarcts two integers
int subtraction(int a, int b) {
    return a - b;
}

// Function that multiplys two integers 
int multiplication(int a, int b) {
    return a * b;
}

// Function that divides two integers (implicit type conversion) and returns a double
double division(double a, double b) {
    return a / b;
}
