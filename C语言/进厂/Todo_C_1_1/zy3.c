#include <stdio.h>
int main3()
{
	float C;
	float F;
	printf("请输入摄氏温度：");
	scanf_s("%f", &C);
	F = C * 1.8 + 32;
	printf("华氏温度是%.1f\n", F);
	return 0;
}