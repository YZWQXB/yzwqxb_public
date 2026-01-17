#pragma once
#include "datatype.h"
//成绩单类型
typedef struct score
{
	char name[30];
	int math;
	int chinese;
	int english;
	int del;
}SCORE, * P_SCORE;

extern PLinkedList listScore;

int importData(const char* path);

void loadData();