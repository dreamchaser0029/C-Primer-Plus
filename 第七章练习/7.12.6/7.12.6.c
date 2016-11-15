#include<stdio.h>
int main(void)
{
	char ch;
	char next;
	int n = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
			if ((next = getchar()) == 'i')
			{
				n++;
				continue;
			}
			else
				continue;
		else
			continue;
	}

	printf("%d", n);

	return 0;
}