/*
  知识点列表：
  1 类型关键字
  2 命名规范
  3 
  4 字节大小与数据范围
  5 溢出现象
  6 
  7 
  8 
  9 
  10 打印格式
*/
#include<stdio.h>
int main03()
{
	char chl = 'A';
	printf("影像类型：%c  编码类型：%hhd\n", chl, chl);
	char cValue=48;
	printf("影像类型：%c  编码类型：%hhd\n", cValue, cValue);

	//字符型
	chl = 'm';
	chl = '\130';
	chl = 'X58';
	
	printf("ABCsefg\101\102\103\x41\x42\43\xa");
	printf("ABCSEFG\b123\n");   // \b回退
	printf("abcdsefg\r123\n");   // \r回车

	printf(" \' \" \\n \n");   // 转义符  
	printf("%%\n");           //转义符%  printf专用

    //数字 数字类型
	int num = '5';
	num -= '0';
	printf("%d\n", num);

	//字母大小写转换
	char a = 'a';
	a -= 32;
	printf("%c\n", a);
	return 0;
}