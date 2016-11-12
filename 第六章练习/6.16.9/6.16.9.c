#include<stdio.h>
double math(double number1,double number2);
int main(void)
{
	double num1, num2, result;
	printf("Enter two floating-number:");
	while (scanf("%lf %lf", &num1, &num2) == 2)
	{
		result = math(num1, num2);
		printf("The result is %lf.\n", result);
		printf("Enter next two floating numbers:");
	}

	return 0;
}

double math(double number1, double number2)
{
	double res;
	res = (number1 - number2) / (number1 * number2);
	return res;
}
