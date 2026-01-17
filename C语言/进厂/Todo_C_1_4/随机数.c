#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main6() {
	srand((int)time(NULL));
	printf("%d", rand());
	printf("%d", rand());
	printf("%d", rand());
	printf("%d", rand()%6+1);//÷»×ÓÈ¡Êı
	return 0;
}