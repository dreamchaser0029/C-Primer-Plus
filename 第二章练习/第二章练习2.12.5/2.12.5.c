#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
	//�����Զ��庯���ֱ�Ҫ���ӡ��Ϣ
	printf("Brazil,Russia,India,China.\n");
	ic();
	printf(",\n");
	br();

	getchar();
	return 0;
}
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}