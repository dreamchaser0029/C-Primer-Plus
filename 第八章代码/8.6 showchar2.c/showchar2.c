#include<stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;
	int rows, cols;
	printf("Enter a character and two intergers:\n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d %d ", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("Enter another characterand two integers;\n");
		printf("Enter a newline two quit.\n");
	}
	printf("Bye.\n");

	return 0;
}

void display(char ch, int lines, int width)
{
	int row, cols;
	for (row = 1; row <= lines; row++)
	{
		for (cols = 1; cols <= lines; cols++)
			putchar(ch);
		putchar('\n');
	}
}