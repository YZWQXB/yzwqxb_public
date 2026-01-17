#include<stdio.h>
#include "collections.h"
#include "score.h"
#pragma comment(lib,".\\linklist.lib")
int main() {
	PLinkedList list = createLinkedList();
	add(list, (void*)"one");
	add(list, (void*)"two");
	add(list, (void*)"three");
	add(list, (void*)"four");
	iterator(list);
	while (hasNext(list)) {

		const char* str = (const char*)next(list);
		printf("%s\n", str);
	}
	return 0;
}
