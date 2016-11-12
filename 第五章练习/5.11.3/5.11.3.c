//转换周数和天数
#include<stdio.h>
int main(void)
{
	int day, week, days;

	printf("Enter the days number:");
	scanf("%d", &day);
	while (day > 0)
	{
		week = day / 7;
		days = day % 7;
		printf("%d day(s) has %d week(s) and %d days.\n", day, week, days);
		printf("Enter the next days number(<=0 to quit):");
		scanf("%d", &day);
	}

	printf("Done!");
	
	return 0;
}