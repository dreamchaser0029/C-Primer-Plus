#include<stdio.h>
#include<string.h>
int main(void)
{
	char fname[20], sname[20];
	int d, e;
	printf("Enter your first name:\n");
	scanf("%s", fname);
	printf("Enter your surname:\n");
	scanf("%s", sname);
	d = strlen(sname);
	e = strlen(fname);
	printf("%-20s %-20s\n", fname, sname);
	printf("%20d %20d\n", d, e);
	printf("%-20s %-20s\n", fname, sname);
	printf("%-20d %-20d\n", d, e);

	getchar();
	getchar();
	return 0;
}