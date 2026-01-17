#pragma once
//成绩单类型
typedef struct score
{
	char name[30];
	int math;
	int chinese;
	int english;
	int del;
}SCORE,*P_SCORE;