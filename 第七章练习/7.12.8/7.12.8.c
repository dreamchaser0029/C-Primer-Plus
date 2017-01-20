#include<stdio.h>
#include<ctype.h>
#define WAGE1 8.75
#define WAGE2 9.33
#define WAGE3 10.00
#define WAGE4 11.20 
#define BASE_RATE1 300
#define BASE_RATE2 450
#define BASIC_PER1 0.15
#define BASIC_PER2 0.20
#define BASIC_PER3 0.25
#define BASIC_HOURS 40
#define MULTIPLE 1.5
float hour(void);
float wage(float hour, int level);
float levy(float pay);
void income(float wages, float levys);
void displays(void);

int main(void)
{
	float hours, salary, tax;
	int n;

	displays();
	while ((n = getchar()) != '5')
	{
		if (isdigit(n))
		{
			switch (n)
			{
			case '1':
				hours = hour();
				salary = wage(hours, WAGE1);
				break;
			case '2':
				hours = hour();
				salary = wage(hours, WAGE2);
				break;
			case '3':
				hours = hour();
				salary = wage(hours, WAGE3);
				break;
			case '4':
				hours = hour();
				salary = wage(hours, WAGE4);
				break;
			default:
				printf("Enter 1~4 or 5:");
				break;
			}
		}
		tax = levy(salary);
		income(salary, tax);
		displays();
	}

	printf("Done!\n");
	return 0;
}

float hour(void)
{

	float hours;
	printf("Enter your working time:");
	scanf("%f", &hours);
	if (hours > BASIC_HOURS)
		return MULTIPLE * hours;
	return hours;
}

float wage(float hour, int level)
{
	return hour * level;
}

float levy(float pay)
{
	if (pay <= BASE_RATE1)
		return pay * BASIC_PER1;
	else if (pay <= BASE_RATE2 && pay >= BASE_RATE1)
		return BASE_RATE1 * BASIC_PER1 + (pay - BASE_RATE1) * BASIC_PER2;
	else
		return BASE_RATE1 * BASIC_PER1 + (BASE_RATE2 - BASE_RATE1) * BASIC_PER2 + (pay - BASE_RATE2) * BASIC_PER3;
}

void income(float wages, float levys)
{
	float earning;
	earning = wages - levys;
	printf("The income is %.2f, the tax is %.2f, the net income is %.2f\n", wages, levys, earning);
}

void displays(void)
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