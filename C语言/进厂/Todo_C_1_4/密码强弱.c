#include <stdio.h>
int main11() {
	char psd;
	int count = 0;  
	int hsaNum = 0;
	int hsaUpper = 0;
	int hsaLower = 0;
	int hsaOther = 0;
	do{
		scanf_s("%c", &psd,1); //scanf_s安全问题 1代表每次只读取一个字符
		if (psd != '\n') {
			count++;
			if (psd>='1' && psd <= '9') {
				hsaNum = 1;
			}
			else if (psd >= 'a' && psd <= 'z') {
				hsaLower = 1;

			}
			else if (psd >= 'A' && psd <= 'Z') {
				 hsaUpper= 1;

			}
			else {
				hsaOther = 1;
			}
		}
	} while (psd != '\n');

	if (count < 6) {
		printf("弱密码");
		
	}
	else {
		switch (hsaLower + hsaNum + hsaUpper + hsaOther) {
		case 3:
		case 4:
			printf("强密码");
			break;
		case 2:
			printf("中密码");
			break;
		case 1:
			printf("弱密码");
			break;

		}
	}
	return 0;
}