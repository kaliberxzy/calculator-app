#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(double a, double b);

int main () {

	int a;
	int b;
	int selection;

	printf("Select an operation: Addition = 1; Subtraction = 2; Multiplication = 3; Division = 4\n");
	scanf("%d", &selection);
	printf("Enter two whole numbers: ");
	scanf("%d %d", &a, &b);
	
	switch (selection) {
		case 1:
			printf("%d\n",addition(a, b));
			break;
		case 2:
			printf("%d\n",subtraction(a, b));
			break;
		case 3:
			printf("%d\n", multiplication(a, b));
			break;
		case 4:
			printf("%lf\n", division(a, b));
			break;
	}	

	return 0;
}

int addition(int a, int b){
	return a + b;
}

int subtraction(int a, int b){
	return a - b;
}

int multiplication(int a, int b){
	return a*b;
}

double division(double a, double b){
	if (b!=0)
		return a / b;
	else
		return -1;
}