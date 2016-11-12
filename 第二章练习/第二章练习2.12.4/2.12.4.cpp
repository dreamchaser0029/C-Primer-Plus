#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
	//调用自定义函数打印消息
	jolly();
	jolly();
	jolly();
	deny();

	getchar();
	return 0;
}
void jolly(void)
{
	printf("For he's a jollly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny\n");
}