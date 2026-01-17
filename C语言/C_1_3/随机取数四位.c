#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand((int)time(NULL));
	int num;
	num = rand() % 9000 + 1000;//四位数
	int q, b, s, g;
	q = num / 1000; 
	b = num % 1000 / 100;
	s = num % 100 / 10;
	g = num % 10;
	
	int guess;
	do {
		scanf_s("%d", &guess);
		setvbuf(stdin, NULL, _IOFBF, 100);//清除键盘缓冲区 
		
		if (!(guess <= 10000 && guess >= 1000)) {

			continue;//跳出循环重新循环
		}//限制是四位数
		
		int qq, bb, ss, gg;
		qq = guess / 1000;
		bb = guess % 1000 / 100;
		ss = guess % 100 / 10;
		gg = guess % 10;
		printf("%c", qq == q ? q + '0' : '*');
		printf("%c", bb == b ? b + '0' : '*');
		printf("%c", ss == s ? s + '0' : '*');
		printf("%c", gg == g ? g + '0' : '*');

	} while (guess != num);
	
	printf("猜对了");
	return 0;
}