#include <stdio.h>


/* 勤俭是一种美德 */
int main5()
{
	int h = 1000;
	int s = 50;
	if(h>s)
	{
		h = h - s;
		printf("还剩%d元钱\n",h);
	}
	return 0;
}