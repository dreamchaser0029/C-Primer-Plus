#include<stdio.h>
int main(void)
{
	float max = 100, min = 0;
	float n = 50;
	char ch;
	printf("Please a number from 0 to 100.");
	printf("Is it %f?\n", n);
	printf("Enter yes(y)/high(h)/low(l)\n");

	while ((ch = getchar()) != 'y')
	{
		while (ch == '\n')
			break;
		if (ch == 'h')
			{
				max = n;
				n = (max + min) / 2;
				printf("Is it %f?\n", n);
				printf("Enter yes(y)/high(h)/low(l)\n");
				continue;
			}
		else if (ch == 'l')
			{
				min = n;
				n = (max + min) / 2;
				printf("Is it %f?\n", n);
				printf("Enter yes(y)/high(h)/low(l)\n");
				continue;
			}
		else if (ch == '\n')
				continue;
		else
			{
				printf("Enter h or l\n");
				while ((ch =getchar()) != '\n')	
					continue;
			}
	}
	printf("I know i can do\n");

	getchar();
	getchar();
	return 0;
}