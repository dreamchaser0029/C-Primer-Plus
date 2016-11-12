#include<stdio.h>
int main(void)
{
	int n = 5, week;

	for (week = 1; n < 150; week++)
	{
		n = (n - week) * 2;
		printf("Rabund has %d friends in %d week\n", n, week);
	}

	getchar();
	return 0;
}