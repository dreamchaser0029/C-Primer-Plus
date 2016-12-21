#include<stdio.h>
#define ARTICHOKES 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 100
#define percent 0.05
#define BASE1 5
#define BASE2 14
#define BASE3 20
#define BASIC1 6.5
#define BASIC2 14
#define BASIC3 0.5
void display(void);
float kilograms(void);
float cost(float kilos, float univalent);
void total_cost(float ar, float be, float ca, float a_kil, float b_kil, float c_kil);
int main(void)
{
	float a_kilos = 0, b_kilos = 0, c_kilos = 0;
	float a_cost, b_cost, c_cost;
	char ch;
	int n;

	display();
	while ((ch = getchar()) != 'q')
	{
		switch (ch)
		{
		case 'a':
			n = kilograms();
			a_kilos += 0;
			break;
		case 'b':
			n = kilograms();
			b_kilos += 0;
			break;
		case 'c':
			n = kilograms();
			c_kilos += 0;
			break;
		case '\n':
			continue;
		default:
			printf("Please enter a b c or q.\n");
			continue;
		}
		display();
	}

	a_cost = cost(a_kilos, ARTICHOKES);
	b_cost = cost(b_kilos, BEET);
	c_cost = cost(c_kilos, CARROT);
	total_cost(a_cost, b_cost, c_cost, a_kilos, b_kilos, c_kilos);
}

void display(void)
{
	printf("(a) artichokes 2.05 (b) beet 1.15\n");
	printf("(c) carrots    1.01 (q) quit\n");
}

float kilograms(void)
{
	float kilogram;
	scanf("%f", &kilogram);
	return kilogram;
}

float cost(float kilos, float univalent)
{
	float costs;
	costs = kilos * univalent;
	return costs;
}

void total_cost(float ar, float be, float ca, float a_kil, float b_kil, float c_kil)
{
	float all_kilograms, all_cost, discount = 0, package, cost;
	all_kilograms = a_kil + b_kil + c_kil;
	all_cost = ar + be + +ca;
	if (all_cost > DISCOUNT)
		discount = all_cost * percent;
	if (all_kilograms <= BASE1)
		package = BASIC1;
	else if (BASE1 < all_kilograms && all_kilograms < BASE2)
		package = BASIC2;
	else
		package = BASIC2 + (all_kilograms - BASE1) * BASE3;
	cost = all_cost - discount + package;
	display();
	printf("articokes %f   %f\n", a_kil, ar);
	printf("beet      %f   %f\n", b_kil, be);
	printf("carrot    %f   %f\n", c_kil, ca);
	printf("all_costs %f\n", all_cost);
	if (discount > 0)
		printf("discount   %f\n", discount);
	printf("package_cost   %f\n", package);
	printf("total_cost:    %f\n", cost);
	printf("That's all!\nBye!\n");
}