#include<stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i, j;

	printf("Enter two number and a word:");
	scanf("%c %d %d", &ch, &i, &j);
	chline(ch, i, j);

	return 0;
}

void chline(char ch, int i, int j)
{
	int n, m;
	for (n = 0; n < j; n++)
	{
		for (m = 0; m < i; m++)
			putchar(ch);
		putchar('\n');
	}
}
