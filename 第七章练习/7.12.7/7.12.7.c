#include<stdio.h>
#define RATE1 300
#define RATE2 RATE1 + 150
#define BASE 1000
#define OVER 1.5
#define PER1 0.15
#define PER2 0.2
#define PER3 0.25
float hours(void);
float rates(int money);

float hours(void)
{
	float hours;
	printf("Enter your work hours:");
	scanf("%f", &hours);
	if (hours > 40)
		hours *= 1.5;
	return hours;
}

float rates(int money)
{
	int rates;
	if (money <= RATE1)
		rates = money * PER1;
	else if (money >= RATE1 && money <= RATE2)
		rates = RATE1 * PER1 + (money - RATE1) * PER2;
	else
		rates = RATE1 * PER1 + 150 * PER2 + (money - RATE2) * PER3;
	return rates;
}

int main(void)
{
	int moneys;
	float hour, rate;

	hour = hours();
	moneys = hour * BASE;
	rate = rates(moneys);
	printf(" %d    %f     %f\n", moneys, rate, moneys - rate);

	printf("Bye!");
	return 0;
}