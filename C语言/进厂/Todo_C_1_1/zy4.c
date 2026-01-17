#include <stdio.h>
int main06() {
	int a, b, c, d;
	int t;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	t = a, a = b, b = c, c = d, d = t;
	printf("%d%d%d%d", a, b, c, d);

	return 0;
}