#include<stdio.h>
double harmoinc_mean(double x, double y);

int main(void)
{
	double first, second, result;
	printf("Please enter two number:\n");
	scanf("%lf %lf", &first, &second);
	result = harmoinc_mean(first, second);
	printf("The harmoinc mean is %lf\n", result);
	printf("Bye!");
	return 0;
}
double harmoinc_mean(double x, double y)
{
	double res_first, res_second, res_average;
	res_first = 1 / x;
	res_second = 1 / y;
	res_average = (res_first + res_second) / 2;
	return 1 / res_average;
}