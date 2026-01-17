#include<stdio.h>
int main04()
{
	/*
	自动类型转换
	*/
	printf("%d %g", 7 / 2,7. / 2);


	/*
	强制类型转换
	*/
	printf("%d", sizeof(5 + (double)7));
	return 0;
}