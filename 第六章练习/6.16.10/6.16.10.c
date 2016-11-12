#include<stdio.h>
int main(void)
{
	int n, lower, upper, sum;

	printf("Enter lower and upper integer limits:");
	scanf("%d %d", &lower, &upper);

	while (lower < upper)
	{
		for (sum = 0, n = lower; n <= upper; n++)
			sum += n * n;
		printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
		printf("Enter next set of limits:");
		scanf("%d %d", &lower, &upper);
	}

	printf("Done!");
	
	return 0;
}