#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=5 , i=0, sum=0;
    int score[size];
    float average;
    
    printf("輸入 -1 代表輸入結束\n");

    do {
        if (i >= size) {
            printf("陣列已滿\n");
            break;
        }
        printf("請輸入分數 ==> ");
        scanf("%d", &score[i]);
        if(score[i]==-1)
        	break;
        sum += score[i];
    } while (score[i++] >=0);

    average = (float) sum / i; // 計算平均值，i 表示有效的分數數量
    printf("平均分數是 %6.2f\n", average);

	system("pause");
    return 0;
}

