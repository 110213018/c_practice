#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, sum;
    int num3[3][3];

    int num1[3][3] = {{2, 5, 6},
                      {8, 5, 4},
                      {3, 8, 6}};

    int num2[3][3] = {{56, 8, 9},
                      {76, 55, 2},
                      {6, 2, 4}};

    // 計算矩陣相乘 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0; // 每計算完一個值，重置 sum
            for (k = 0; k < 3; k++) {
                sum += num1[i][k] * num2[k][j];
            }
            num3[i][j] = sum;
        }
    }

	// 輸出相乘結果，每輸出完一列就換行輸出 
    printf("列出相乘結果\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", num3[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

