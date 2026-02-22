#include <stdio.h>

int main() {
	int printresult = 0;
	float num1;
	float num2;
	float result;
	char op;
	printf("Put the first number\n");
	scanf("%f", &num1);
	printf("Put the operator (+ - * /)\n");
	scanf(" %c", &op);
	printf("Put the second number\n");
	scanf("%f", &num2);
	if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else if (op == '/') {
		if (num2 == 0) {
			printf("You can't divide by 0\n");
			printresult = 1;
		} else {
			result = num1 / num2;
		}
	}
	else {
		printf("Invalid operator\n");
	}
	if (printresult == 0) {
	printf("Result: %f\n", result);
	} else {
		return 0;
	}
	return 0;
}
