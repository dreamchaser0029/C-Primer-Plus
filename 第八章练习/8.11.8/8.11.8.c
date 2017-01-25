#include<stdio.h>
#include<ctype.h>
void display(void);
void add(void);
void multiply(void);
void subtract(void);
void divide(void);
float first(void);
float second(void);
int main(void)
{
	char ch;
	
	display();
	while ((ch = getchar()) != 'q')
	{
		while (ch == '\n')
			ch = getchar();
		if (isalpha(ch))
		{
			switch (ch)
			{
			case 'a':
				add();
				break;
			case 's':
				subtract();
				break;
			case 'm':
				multiply();
				break;
			case 'd':
				divide();
				break;
			case 'q':
				goto part;
			default:
				printf("Enter a , s, m, q or q\n");
				break;
			}
		}
		display();
	}

	part:printf("Bye!\n");

	return 0;
}

void display(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add			s. subtract\n");
	printf("m. multiply     d. divide\n");
	printf("q. quit\n");
}

void add(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = first();
	printf("Enter second number:");
	l_number = second();
	printf("%.2f + %.2f = %.2f\n", f_number, l_number, f_number + l_number);
}

void multiply(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = first();
	printf("Enter second number:");
	l_number = second();
	printf("%f * %f = %f\n", f_number, l_number, f_number * l_number);
}

void subtract(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = first();
	printf("Enter second number:");
	l_number = second();
	printf("%.2f - %.2f = %.2f\n", f_number, l_number, f_number - l_number);
}

void divide(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = first();
	printf("Enter second number:");
	l_number = second();
	while (l_number == 0)
	{
		printf("Enter a number other than 0: ");
		l_number = second();
	}
		printf("%.2f / %.2f = %.2f\n", f_number, l_number, f_number / l_number);
}

float first(void)
{
	float n;
	char m;
	while ((scanf("%f", &n)) != 1)
	{
		while ((m = getchar()) != '\n')
			putchar(m);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3£º");
	}
	return n;
}

float second(void)
{
	float n;
	char m;
	while ((scanf("%f", &n)) != 1)
	{
		while ((m = getchar()) != '\n')
			putchar(m);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3£º");
	}
	return n;
}