#include<stdio.h>
char get_first(void);
int main(void)
{
	char n;
	printf("I will get the first words.\n");
	printf("Enter a sentence:");
	n = get_first();
	printf("%c", n);

	getchar();
	getchar();
	getchar();
	return 0;
}

char get_first(void)
{
	char ch;

	while ((ch = getchar()) <= 32)
		continue;

	return ch;
}