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
	printf("a) $8.75/hr                         b) $9.33/hr\n");
	printf("c) $10.00/hr                        d) $11.20/hr\n");
	printf("q) quit\n");
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
	float rates;
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
	double moneys, hour;
	char n;

	print();
	while ((n = getchar()) != 'q')
	{
		hour = hours();
		switch (n)
		{
		case 'a':
			moneys = hour * BASE1;
			break;
		case 'b':
			moneys = hour * BASE2;
			break;
		case 'c':
			moneys = hour * BASE3;
			break;
		case 'd4':
			moneys = hour * BASE4;
			break;
		case '\n':
			continue;
		default:
			printf("Enter a,b,c,d or q");
			while (getchar() != '\n')
				continue;
			continue;
		}

		void rate(moneys);
		print();
	}

	printf("Bye!");
	return 0;
}