/*
  知识点列表：
  1 类型关键字
  2 命名规范
  3 字面值后缀
  4 字节大小与数据范围
  5 
  6 
  7 
  8 
  9
  10 打印格式
*/
#include<stdio.h>
int main02()
{
	float fValue = .25f;
	double dValue = .25;
	long double ldValue= .25l;//标准化组织IEEE 定义了  可能被升级。

	float pi = 3.1415926f;
	double po = 3.1415926;
	
	double num = 6.8e10;
	printf("指数形式%e\n", po);
	printf("小数形式%e\n", po);
	printf("指数形式%e\n", num);
	printf("小数形式%e\n", num);
	printf("最简短形式%g  %g\n", po,num);
	


	return 0;
}