#include<stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	//定义两个函数，并按要求打印
	printf("Starting new:\n");
	one_three();
	printf("Done!");

	getchar();
	return 0;
}
void one_three(void)
{
	printf("One\n");
	two();
	printf("Three\n");
}
void two(void)
{
	printf("Two\n");
}