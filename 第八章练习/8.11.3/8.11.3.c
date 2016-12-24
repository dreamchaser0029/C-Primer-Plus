#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int lower = 0;
	int bigger = 0;
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			lower++;
		else if (isupper(ch))
			bigger++;
		else
			continue;
	}

	printf("slow %d upper %d", lower, bigger);
	getchar();
	return 0;
}