#include<stdio.h>
#define STOP '#'
int main(void)
{
	char ch;
	int space = 0, enter = 0, other = 0;

	while ((ch = getchar()) != STOP)
	{
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			enter++;
		else
			other++;
	}
	printf("Space    enter     other\n");
	printf("%4d %4d %4d", space, enter, other);
	getchar();
	getchar();

	return 0;
}