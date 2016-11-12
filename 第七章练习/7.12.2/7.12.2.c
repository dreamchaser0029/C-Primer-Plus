#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;

	while ((ch = getchar()) != '#')
	{
		n++;
		printf("%5d  %c", ch, ch);
		if (n % 8 == 0)
			printf("\n");
	}
	getchar();
	getchar();
	return 0;

}