#include<stdio.h>
int main(void)
{
	//���ת��Ϊ��
	double seconds_per_years = 3.156*10e7;
	float age;

	printf("Enter your age:\n");
	scanf("%f", &age);
	printf("You are %f years old\n", age);
	printf("And %f years has %f seconds.\n", age, age * seconds_per_years);

	getchar();
	getchar();
	return 0;
}