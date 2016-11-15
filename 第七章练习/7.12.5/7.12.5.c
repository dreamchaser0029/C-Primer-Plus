#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '!' :
			putchar('!');
			putchar('!');
			n++;
			break;
		case '.' :
			putchar('!');
			n++;
			break;
		default :
			putchar(ch);
			break;
		}
	}

	printf("%d", n);

	return 0;
}