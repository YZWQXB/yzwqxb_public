#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
人机猜数游戏

由计算机“想”一个四位数，请人猜这个四位数是多少。人输入四位数字后，计算机首先判断这四位数字中有几位是猜对了，并且在对的数字中又有几位位置  也是对的，将结果显示出来，给人以提示，请人再猜，直到人猜出计算机所想的四位数是多少为止
 

*/
int main06()
{
	int num;
	
	srand((unsigned)time(NULL));//随机数初始化
	num= rand()%9000+1000;//产生随机的四位数
	 
	return 0; 
}