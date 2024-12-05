#include <stdio.h>
#include <stdlib.h>

void findRow(int n, int data[]);
void findGraph(int n, int data[], int row);

int main() {
    int n, i;
    printf("請輸入長條圖的 x 軸數字個數: ");
    scanf("%d", &n);

    int data[n];
    printf("請輸入在長條圖上顯示的數值: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    findRow(n, data);
    return 0;
}

// 找出 y 軸的最高值 (data 的最高值 + 2)
void findRow(int n, int data[]) {
    int row = 0, i;
    for (i = 0; i < n; i++) {
        if (data[i] > row) { // 比較大小, 最大值變成 row
            row = data[i];
        }
    }
    row = row + 2;
    findGraph(n, data, row);
}

// 繪製長條圖
void findGraph(int n, int data[], int row) {
	int r, c, i;
    for ( r = row; r > 0; r--) {
        for ( c = 0; c < n; c++) {
            if (c == 0) { // 輸出 y 軸
                if (r / 10 < 1) {
                    printf("0%d ", r);
                } else {
                    printf("%d ", r);
                }
            }

            // 找出 ## 和 ..
            // 如果 data[c] < y 軸的值, 就輸出 ..; 反之, 輸出 ##
            if (data[c] < r) {
                printf(".. ");
            } else {
                printf("## ");
            }
        }
        printf("\n"); // 輸完一列就換行
    }

    // 輸出 x 軸
    for ( i = 0; i <= n; i++) {
        if (i / 10 < 1) {
            printf("0%d ", i);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
}

