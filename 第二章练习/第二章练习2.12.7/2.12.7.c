#include<stdio.h>
void smile(void);
int main(void)
{
	//�Լ�����һ����������Ҫ���ӡ
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();

	getchar();
	return 0;
}
void smile(void)
{
	printf("Smile!");
}