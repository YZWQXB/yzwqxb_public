#include<stdio.h>
int main11()
{
	/*
	运算表达式的基本概念：
	1：运算符
	2：操作数
	3：表达式
	4：结合性 
	5：优先级
	*/
	/*
	牢记：只要是表达式 就有一个计算结果
	*/


	/*
	算术运算符： + - * / % ( ) 
	相反数运算符：-
	*/
	8; //常量语句
	int a;
	a = 8; //常量表达式

	printf("%d\n", 9 % 2);
	printf("%d\n", -9 % 2);
	printf("%d\n", -9 % -2);

	int n = 8;
	n = -n;
	printf("%d\n", n);
	printf("%d", - - -n);
	return 0;
}