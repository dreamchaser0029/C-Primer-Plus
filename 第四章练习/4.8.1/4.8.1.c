#include<stdio.h>
int main(void)
{
	//����Ҫ���ӡ
	char fname[40];
	char lname[40];

	printf("Enter your First Name:\n");
	scanf("%s", fname);
	printf("Enter your Last Name:\n");
	scanf("%s", lname);
	printf("%s,%s\n", fname, lname);

	getchar();
	getchar();
	return 0;
}