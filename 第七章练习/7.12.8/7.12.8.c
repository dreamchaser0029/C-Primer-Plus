#include<stdio.h>
#define RATE1 300
#define RATE2 RATE1 + 150
#define BASE1 8.75
#define BASE2 9.33
#define BASE3 10.00
#define BASE4 11.20
#define OVER 1.5
#define PER1 0.15
#define PER2 0.2
#define PER3 0.25
void print(void);
float hours(void);
void rate(int money);

void print(void)
{
	int n;
	for (n = 80; n > 0; n--)
		printf("*");
	printf("\n");
	printf("Enter the number corresponding to the desired pay rate or action: \n");
	printf("1) $8.75/hr                         2) $9.33/hr\n");
	printf("3) $10.00/hr                        4) $11.20/hr\n");
	printf("5) quit\n");
	for (n = 80; n > 0; n--)
		printf("*");
	printf("\n");
}

float hours(void)
{
	float hours;
	printf("Enter your work hours:");
	scanf("%f", &hours);
	if (hours > 40)
		hours *= 1.5;
	return hours;
}

void rate(int money)
{
	int rates;
	if (money <= RATE1)
		rates = money * PER1;
	else if (money >= RATE1 && money <= RATE2)
		rates = RATE1 * PER1 + (money - RATE1) * PER2;
	else
		rates = RATE1 * PER1 + 150 * PER2 + (money - RATE2) * PER3;
	printf("%f      %f       %f   ", money, rates, money - rates);
}

int main(void)
{
	int n, moneys, hour;

	print();
	while ((n = getchar()) != 5)
	{
		switch (n)
		{
		case '1':
			hour = hours();
			moneys = hour * BASE1;
			break;
		case '2':
			hour = hours();
			moneys = hour * BASE2;
			break;
		case '3':
			hour = hours();
			moneys = hour * BASE3;
			break;
		case '4':
			hour = hours();
			moneys = hour * BASE4;
			break;
		case '\n':
			continue;
		default:
			printf("Enter 1~5");
			continue;
		}

		void rate(moneys);
		print();
	}

	printf("Bye!");
	return 0;
}