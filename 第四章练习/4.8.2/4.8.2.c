#include<stdio.h>
#include<string.h>
int main(void)
{
	//根据要求打印
	char fname[40], sname[40];
	int d, e, f;

	printf("Enter your First name: \n");
	scanf("%s", fname);
	printf("OK!Then Enter your surname:\n");
	scanf("%s", sname);
	printf("\"%s %s\"\n", fname, sname);
	printf("\"%20s %20s\"\n", fname, sname);
	printf("\"%-20s %s\n", fname, sname);
	d = strlen(fname);
	e = strlen(fname);
	f = d + e;
	printf("%*s %s\n", f + 3, fname, sname);

	getchar();
	getchar();
	return 0;
}