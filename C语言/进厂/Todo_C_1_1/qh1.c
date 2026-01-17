#include <stdio.h>
#include <math.h> 
int main() {
    int r;
    double V, S;
    double a=3.14;
        
    printf("请输入半径值: ");
    scanf_s("%d", &r);  
    V = (4.0 / 3.0) *a * pow(r, 3);
    S = 4 * a * pow(r, 2);

    printf("球的体积是%.2f\n", V);
    printf("球的面积是%.2f\n", S);

    return 0;
}