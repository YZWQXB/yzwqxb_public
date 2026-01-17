#include <stdio.h>
int main4() {
    int a = 1, b = 2, c = 3;
    
    printf("a=");
    scanf_s("%d", &a);
    while (getchar() != '\n'); 
  
    printf("b=");
    scanf_s("%d", &b);
    while (getchar() != '\n');
   
    printf("c=");
    scanf_s("%d", &c);
    while (getchar() != '\n');
 
    printf("%d %d %d", a, b, c);
    
    
    setvbuf(stdin, NULL, _IOFBF, 100);//Çå³ý¼üÅÌ»º³åÇø 
    return 0;
}

