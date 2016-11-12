#include<stdio.h>
#include<string.h>
int main(void)
{
	char word[40];
	int n;

	printf("Enter a word:");
	scanf("%s", word);
	
	for (n = strlen(word) - 1; n >= 0; n--)
		printf("%c", word[n]);

	getchar();
	getchar();
	return 0;
}