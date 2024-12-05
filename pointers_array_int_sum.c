#include <stdio.h>
#include <stdlib.h> 

int main() {
    int array[5];   // 宣告陣列變數
    int *ptr;       // 宣告指標變數
    int sum = 0;    // 儲存整數和的變數
    int i;

    ptr = array;    // 將指標指向陣列的第一個元素

    printf("請輸入5個整數：");

    // 使用指標輸入 5 個整數
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // 計算陣列整數的和
    for(i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    // 輸出結果
    printf("陣列整數和是：%d\n", sum);

    return 0;
}


