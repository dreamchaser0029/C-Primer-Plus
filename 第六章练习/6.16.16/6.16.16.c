#include<stdio.h>
#define PRIZE 100
int main(void)
{
	double Da, De = PRIZE;
	double years = 1.0;

	do
	{
		Da = PRIZE + PRIZE * 0.1 * years;
		De *= 1.05;
		years++;
	} while (Da > De);

	printf("Deirdre needs %lf years and at that time he has %lf money", years, De);

	getchar();
	return 0;
}