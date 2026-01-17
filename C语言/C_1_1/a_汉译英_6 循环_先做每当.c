#包含 <标准输入输出头文件>


/* 模拟上班族的一个月 */
int main06()
{
	int workDay=25;

	do
	{
		workDay -= 1;
		printf("距离发工资还有%d天\n", workDay);
	}while(workDay >=1);
	
	return 0;
}