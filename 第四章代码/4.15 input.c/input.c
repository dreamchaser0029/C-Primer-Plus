// input.c -- ��ʱʹ��&
#include <stdio.h>
int main(void)
{
	int age;    //����
	float assets;    //����
	char pet[30];    //�ַ����飬���ڴ洢�ַ���

	printf("Enter your age, assets, and favorite pets.\n");
	scanf("%d %f", &age, &assets);     //����Ҫ��&
	scanf("%s", pet);                  //�ַ����鲻ʹ��&
	printf("%d $%.2f %s\n", age, assets, pet);

	getchar();
	getchar();
	return 0;
}