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
		if (isalpha(ch))
		{
			while (getchar() != '\n')
				continue;
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
			case '\n':
				continue;
			default:
				printf("Enter a , s, m, q or q\n");
				break;
			}
		}
		display();
	}

	printf("Bye!\n");

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
	f_number = get();
	printf("Enter second number:");
	l_number = get();
	printf("%.2f + %.2f = %.2f", f_number, l_number, f_number + l_number);
}

void multiply(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = get();
	printf("Enter second number:");
	l_number = get();
	printf("%f * %f = %f", f_number, l_number, f_number * l_number);
}

void subtract(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	f_number = get();
	printf("Enter second number:");
	l_number = get();
	printf("%.2f - %.2f = %.2f", f_number, l_number, f_number - l_number);
}

void divide(void)
{
	float f_number, l_number;
	printf("Enter the first number:");
	l_number = get();
	printf("Enter second number:");
	l_number = get();
	while (l_number == 0)
	{
		printf("Enter a number other than 0: ");
		l_number = get();
	}
		printf("%.2f / %.2f = %.2f", f_number, l_number, f_number / l_number);
}

float first(void)
{

	return 0.0f;
}

float get(void)
{
	char response;
	float n;
	n = getchar();
	while (isdigit(n) == 0)
	{
		while ((response = getchar()) != '\n')
		{
			putchar(response);
			continue;
			if (response == '\n')
				break;
		}
		printf(" is not a number.");
		n = getchar();
	}
	return n;
}
