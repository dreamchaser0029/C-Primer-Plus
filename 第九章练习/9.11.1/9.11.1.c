#include<stdio.h>
double min(double x, double y);

int main(void)
{
	double n;
	double x, y;

	printf("Enter two numbers and choose a smaller number:");
	scanf("%lf %lf", &x, &y);
	n = min(x, y);
	printf("The smaller one is %lf", n);
	
	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;
}