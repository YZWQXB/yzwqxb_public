#include "collections.h"
#include <stdio.h>
#include<string.h>
#include "score.h"

#pragma comment(lib,".\\Stacklinklib（X86）.lib")

PLinkedList listScore = NULL;
int main() {

	listScore = createLinkedList();
	int ts = importData("D:\\myfile\\cj.txt");
	printf("成功导入：%d条\n", ts);

	loadData();
	//遍历链表 查看数据
	iterator(listScore);
	while (hasNext(listScore))                                                                                                                                         
	{
		P_SCORE ps = (P_SCORE)next(listScore);
		if (ps->del == 0)
		{
			printf("%-20s%d  %d  %d\n", ps->name, ps->math
				, ps->english, ps->chinese);
		}

	}
	return 0;
}