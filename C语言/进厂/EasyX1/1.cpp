#include <graphics.h> 
#include <stdio.h>
int main01()
{
	initgraph(600, 800, EW_SHOWCONSOLE);
	setlinecolor(0x0000ff);
	setlinestyle(PS_DASHDOT,6);
	for (int i=10;i>=1;i--) 
	{
		circle(100, 400, 20*i);
		//fillcircle()
		solidcircle(200, 100, 20 * i);
	}


	system("pause");
	return 0;
}