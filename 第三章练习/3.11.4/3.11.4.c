#include<stdio.h>
int main(void)
{
	//��ȡһ�����������ֱ��ӡ��С������ʽ��ָ����ʽ��p������
	float number;
	printf("Enter a floating-point value:");
	scanf("%f", &number);
	printf("fixed-point notation: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("P notation: %a\n", number);

	getchar();
	getchar();
	return 0;
}