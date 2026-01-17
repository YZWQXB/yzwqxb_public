/*
  知识点列表：
  1 类型关键字
  2 命名规范
  3 字面值后缀
  4 字节大小与数据范围
  5 溢出现象
  6 进制转换
  7 内存存储原理：原码 补码 反码
  8 左值 右值
  9 八进制 十六进制字面值
  10 打印格式
*/
#include<stdio.h>
int main01()
{
	//signed int iValue = 9;
	//unsigned int uiValue = 9u;
	//printf("int 字节数 %d %d %d\n ", sizeof(int), sizeof(iValue), sizeof(9));


	//signed long int lValue = 9l;
	//printf("signed long int 字节数 %d %d %d \n", sizeof(long), sizeof(lValue), sizeof(9l));
	//unsigned long int ulValue = 95ul;
	//signed long long int llValue = 95ll;
	//printf("signed long int 字节数 %d %d %d \n", sizeof(long long), sizeof(llValue), sizeof(95ll));
	//unsigned long long int ullValue = 95ull;

	//signed short int sValue = 9;//小于int 按int
	//printf("signed short int字节数 %d %d %d \n", sizeof(short), sizeof(sValue), sizeof(9));
	//unsigned short int usValue = 9u;

	//signed char cValue = 'A';
	//printf("signed short int字节数 %d %d %d \n", sizeof(char), sizeof(cValue), sizeof('A'));
	//unsigned char  ucValue = 48u;

	//0b10000;//十进制
	//0362;//八进制
	//0x4a;//十六进制
	//int num = 168;
	//printf("十进制是%d,八进制是%o,十六进制是%x",num, num, num);
 

	char a = -1;
	unsigned char b = -1;
	printf("%hhd %hhu %hhd %hhu\n", a, a, a / 2, a / 2 + 1);
	printf("%hhd %hhu %hhd %hhd", b, b, b / 2, b / 2 + 1);
	
	return 0;
}