#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '!')
		{
			putchar('!');
			putchar('!');
			n++;
		}
		else if (ch == '.')
		{
			putchar('!');
			n++;
		}
		else
			putchar(ch);
	}
	printf("%d", n);

	return 0;
}