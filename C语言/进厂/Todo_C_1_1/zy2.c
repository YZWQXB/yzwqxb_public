#include <stdio.h>
 int main2(){
	
	int rmb = 368;
	printf("368需要100元%d张\n", rmb /100);
	printf("368需要50元%d张\n", rmb % 100/50);
	printf("368需要10元%d张\n", rmb % 50 / 10);
	printf("368需要5元%d张\n", rmb % 10 / 5);
	printf("368需要1元%d张\n", rmb % 5 / 1);
	
	return 0;
}