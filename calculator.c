#include <stdio.h>

int addition(int a, int b); 

int main () {

	int a = 6;
	int b = 3;

	printf("%d",addition(a, b));
	
	return 0;
}

int addition(int a, int b){
	return a + b;
}