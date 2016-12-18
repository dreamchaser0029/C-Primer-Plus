#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end,
				long low, long high);
double sum_squares(long a, long b);
int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	long start;
	long stop;
	double answer;

	printf("This program computes the sum of the squares of"
		"integers in a range.\nThe lower bound should not "
		"be less than -10000000 and\nthe upper bound "
		"should not be more than +10000000.\nEnter the "
		"limits (enter 0 for both limits to quit):\n"
		"lower limits:");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while (start != 0 || stop != 0) 
	{
		if (bad_limits(start, stop, MIN, MAX))

	}

}