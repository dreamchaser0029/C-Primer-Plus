#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
	//�����Զ��庯����ӡ��Ϣ
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