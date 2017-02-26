#include<stdio.h>
void large_of(double * x, double * y);
int main(void)
{
	double x, y;
	printf("Enter two numbers:\n");
	scanf("%lf %lf", &x, &y);
	large_of(&x, &y);
	printf("Now two number is %lf and %lf\n", x, y);
	printf("Bye!");
	return 0;
}
void large_of(double * x, double * y)
{
	if (*x < *y)
		*x = *y;
	else
		*y = *x;
}