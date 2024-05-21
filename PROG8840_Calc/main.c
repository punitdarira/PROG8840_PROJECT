#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();
void multiply();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		break;
	case 2:
		subtract();
		break;
	case 3:
		multiply();
		break;
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   PROG8840 Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf("%lf", &num1);
	printf("Enter the second value:");
	scanf("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {

	int num1, num2, result;
	printf("Enter the first value:");
	scanf("%d", &num1);
	printf("Enter the second value:");
	scanf("%d", &num2);
	result = num2 - num1;
	printf("%d - %d = %d\n", num2, num1, result);
}

void multiply() {
	int num1, num2, result;
	printf("Enter the first value:");
	scanf("%d", &num1);
	printf("Enter the second value:");
	scanf("%d", &num2);
	result = num2 * num1;
	printf("%d * %d = %d\n", num1, num2, result);
}

