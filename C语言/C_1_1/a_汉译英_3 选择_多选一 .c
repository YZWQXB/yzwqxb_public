#include <stdio.h>

/*  
	打印不同等级对应的评价
*/
int main3()
{
	char  score= 'A';
	switch(score)
	{
		case 'A':
		case 'a':
			printf("卓越");
			break ;
		case 'B':
		case 'b':
			printf("优秀");
			break;
			case 'C':
			case 'c':
				printf("良好");
			break;
			case 'D':
			case 'd':
				printf("及格");
			break;
		deflaut :
			printf("惨不忍睹");
			break;
	}
	
	return 0;
}