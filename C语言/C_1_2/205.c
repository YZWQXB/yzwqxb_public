#include <stdio.h>
#include "205.h"
/*
	判断一个人能否结婚：
	按法律：男年满22周岁 女年满20周岁
*/
int main205()
{
	int age=21;
	int sex=0;//在C语言中 非0的数字（比如1）代表逻辑‘真’ 0代表逻辑‘假’
			  //此例中：1 代表男  0 代表女	
		
	判断结婚(sex, age);
	return 0;
}
void 判断结婚(int sex, int age)
{
	if (sex)
	{
		if (age >= 22)
		{
			printf("男的 能\n");
		}
		else
		{
			printf("男的 不能\n");
		}
	}
	else
	{
		if (age >= 20)
		{
			printf("女的 能\n");
		}
		else
		{
			printf("女的 不能\n");
		}
	}
}
