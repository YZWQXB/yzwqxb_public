#include <stdio.h>
int main01() {
	int a = 1;
	unsigned int b= 1;
	short c= 1;
	unsigned short d = 1;
	long e = 1;
	unsigned long f = 1;
	long long g = 1;
	unsigned long long h = 1;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(e));
	printf("%d\n", sizeof(f));
	printf("%d\n", sizeof(g));
	printf("%d\n", sizeof(h));
	return 0;
}