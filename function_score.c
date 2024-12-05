#include <stdio.h>
#include <stdlib.h>

char lastScore(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80 && score < 90) {
        return 'B';
    } else if (score >= 70 && score < 80) {
        return 'C';
    } else if (score >= 60 && score < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    
    printf("輸入 0 則程式結束\n請輸入分數: ");
    scanf("%d", &score);
    while (score != 0) {
        printf("%c\n", lastScore(score));
        printf("請輸入分數: ");
        scanf("%d", &score);
    }
    printf("F");
    
    return 0;
}

