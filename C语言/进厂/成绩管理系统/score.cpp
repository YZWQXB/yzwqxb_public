#define  _CRT_SECURE_NO_WARNINGS
#include "score.h"
#include <stdio.h>
#include<stdlib.h>
#include "linkedlist.h"
#include <string.h>


int importData(const char* path)
{

    FILE* p = fopen(path, "rt");
    FILE* q = fopen(".\\data.db", "ab");

    if (p != NULL && q != NULL) {

        SCORE score;
        int count = 0;
        score.del = 0;//从文本读取数据
        while (!feof(p)&&fscanf(p," %s %d %d %d %d",score.name,&score.math,&score.chinese,&score.english)==4) {
           
            fwrite(&score, sizeof(SCORE), 1, q);
            P_SCORE ps = (P_SCORE)malloc(sizeof(SCORE));
            memcpy(ps, &score, sizeof(SCORE));
            add(listScore, ps);
            count++;
        }
       
        fclose(p);
        fclose(q);
        p = q = NULL;
        return count;
    }
    return 0;
}

void loadData()
{
    FILE* p = fopen(".\\data.db", "rb");
    if (p != NULL) {
        while (!feof(p)) {
            P_SCORE ps = (P_SCORE)malloc(sizeof(SCORE));
            int r = fread(ps, sizeof(SCORE), 1, p);
            if (r > 0) {
                add(listScore, ps);
            }
            else {
                free(ps);
            }
        }

        fclose(p);
        p = NULL;
    }
      
}
