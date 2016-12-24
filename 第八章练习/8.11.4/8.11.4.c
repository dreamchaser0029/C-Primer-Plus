#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch, last;
	int letters = 0, words = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isalnum(ch))
			letters++;
		else if (isblank(ch))
			words++;
		else if (ispunct(ch))
			continue;
		else
			continue;
	}

	printf("%d %d %d", letters, words, letters / words);
	return 0;
}