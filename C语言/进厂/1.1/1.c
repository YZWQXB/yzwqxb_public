#include <stdio.h>

int main1( )
{
	int* p;
	double* pd;
	long long* pll;
	char* pc;
	p = pd = pll = pc = NULL;
	printf("%d %d %d\n", sizeof(p), sizeof(*p), p + 1);
	printf("%d %d %d \n", sizeof(pd), sizeof(*pd), pd + 1);
	printf("%d %d %d \n", sizeof(pll), sizeof(*pll), pll + 1);
	printf("%d %d %d \n", sizeof(pc), sizeof(*pc), pc + 1);
	return 0;
}
