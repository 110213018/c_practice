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

    // �p��x�}�ۭ� 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0; // �C�p�⧹�@�ӭȡA���m sum
            for (k = 0; k < 3; k++) {
                sum += num1[i][k] * num2[k][j];
            }
            num3[i][j] = sum;
        }
    }

	// ��X�ۭ����G�A�C��X���@�C�N�����X 
    printf("�C�X�ۭ����G\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", num3[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

