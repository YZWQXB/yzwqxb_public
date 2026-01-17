#include <stdio.h>
 int main15()
{   
	 int a = 15631;
	 int t = 0;
	 do {
		 a /= 10;
		 t+=1;
	 }while (a >0);
	 printf("整数位数有%d位", t);

	return 0;
} 