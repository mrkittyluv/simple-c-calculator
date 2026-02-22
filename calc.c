#include <stdio.h>

int main() {
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
		} else {
			result = num1 / num2;
		}
	}
	else {
		printf("Invalid operator\n");
	}
	printf("Result: %f\n", result);
	return 0;
}
