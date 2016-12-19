#include<stdio.h>
#define BASE1 17850
#define BASE2 23900
#define BASE3 29750
#define BASE4 14875
#define BASIC1 0.15
#define BASIC2 0.28
void rates(float money, int base);
void display(void);
float money(void);
int main(void)
{
	float moneys;
	int ch;
	display();
	while ((ch = getchar()) != '5')
	{
		switch (ch)
		{
			case '1':
				moneys = money();
				rates(moneys, BASE1);
				break;
			case '2':
				moneys = money();
				rates(moneys, BASE2);
				break; 
			case '3':
				moneys = money();
				rates(moneys, BASE3);
				break;
			case '4':
					moneys = money();
					rates(moneys, BASE3);
					break;
			case '\n':
				continue;
			default:
				printf("Enter 1-5");
				break;
		}
		display();
	}
	printf("Bye!\n");
}

void display(void)
{
	printf("(1)17850         (2)23900\n");
	printf("(3)29750         (4)14875\n");
}

float money(void)
{
	float moneys;
	scanf("%f", &moneys);
	return moneys;
}

void rates(float money, int base)
{
	float rate;
	if (money < base)
		rate = money * BASIC1;
	else
		rate = (money - base) * BASIC2 + base * BASIC1;
	printf("%f", rate);
}

