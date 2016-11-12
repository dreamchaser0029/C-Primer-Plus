#include<stdio.h>
#define MAX 8
int main(void)
{
	double num1[MAX];
	double num2[MAX];
	double num, sum;
	int n;

	printf("Enter eight numbers:");

	for (n = 0; n < MAX; n++)
		scanf("%lf", &num1[n]);

	for (n = 0, sum = 0; n < MAX; n++)
	{
		num = num1[n];
		sum += num;
		num2[n] = sum;
	}

	for (n = 0; n < MAX; n++)
		printf("%16lf", num1[n]);

	printf("\n");

	for (n = MAX - 1; n >= 0; n--)
		printf("%16lf", num2[n]);

	getchar();
	getchar();
	return 0;
}