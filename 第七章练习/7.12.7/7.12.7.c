#include<stdio.h>
#define BASIC_WAGE 1000
#define BASE_RATE1 300
#define BASE_RATE2 450
#define BASIC_PER1 0.15
#define BASIC_PER2 0.20
#define BASIC_PER3 0.25
#define BASIC_HOURS 40
#define MULTIPLE 1.5
float hour(void);
float wage(float hour);
float levy(float pay);
void income(float wages, float levys);
int main(void)
{
	float hours, salary, tax;

	printf("Enter your working time:");
	hours = hour();
	salary = wage(hours);
	tax = levy(salary);
	income(salary, tax);

	return 0;
}

float hour(void)
{
	
	float hours;
	scanf("%f", &hours);
	if (hours > BASIC_HOURS)
		return MULTIPLE * hours;
	return hours;
}

float wage(float hour)
{
	float income;
	income = hour * BASIC_WAGE;
	return income;
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
	printf("The income is %f, the tax is %f, the net income is %f", wages, levys, earning);
}
