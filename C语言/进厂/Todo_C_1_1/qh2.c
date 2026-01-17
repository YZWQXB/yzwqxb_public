#include <stdio.h>

int main6() {
    int n ;
    int m = 0;
    scanf_s("%4d", &n);
   
    int t = n;
    while (t > 0) {
        m = m * 10 + t% 10; 
        t /= 10;            
    }

    printf("%4d%4d\n", n, m);

    return 0;
}
