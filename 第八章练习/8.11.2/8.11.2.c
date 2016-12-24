#include<stdio.h>
int main(void)
{
	int n = 0;
	char ch;
	while ((ch = getchar()) != EOF)
	{
		n++;
		if (n % 10 == 0)
			printf("\n");

		if (ch == '\n')
			printf("\\n %d ", ch);
		else if (ch == '\t')
			printf("\\t %d ", ch);
		else if (ch < 32)
			printf("^%c %d ", ch + 64, ch);
		else
			printf("%c %d ", ch, ch);
	}

	return 0;
}