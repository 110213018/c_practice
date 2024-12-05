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
    
    printf("��J 0 �h�{������\n�п�J����: ");
    scanf("%d", &score);
    while (score != 0) {
        printf("%c\n", lastScore(score));
        printf("�п�J����: ");
        scanf("%d", &score);
    }
    printf("F");
    
    return 0;
}

