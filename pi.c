#include <stdio.h>
#include <stdlib.h>

int main() {
    double pi = 4 * (1 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9); // pi 公式 (浮點數運算時，至少有一個操作數要是浮點數
    printf("%f\n", pi); // %f: 以浮點數格式輸出
    return 0;
}

