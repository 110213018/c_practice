#include <stdio.h>
#include <string.h>

void findNaNb(char ori[], char num[]);

int main() {
    // ori: ���T���Ʀr
    // num: ��J�n�q���Ʀr(�̦h 5 ��)
    char ori[5];
    char num[5];
    int i;

    printf("�п�J���T���Ʀr: ");
    scanf("%s", ori);

    for (i = 0; i < 5; i++) {
        printf("�п�J�q�����Ʀr: ");
        scanf("%s", num);
        findNaNb(ori, num);
    }
    return 0;
}

void findNaNb(char ori[], char num[]) {
    int aNum = 0;
    int bNum = 0;

    // ��r���ର��ư}�C
    int intOri[4];
    int intNum[4];
    
    int v, i, j;

    for ( v = 0; v < 4; v++) {
        // �N�r���ন���
        intOri[v] = ori[v] - '0';
        intNum[v] = num[v] - '0';
    }

    for ( i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            // �p�G�q���Ʀr�򥿽T���Ʀr���۵��B��m�@�˪���, aNum+1
            if (intOri[i] == intNum[j] && i == j) {
                aNum += 1;
            }
            // �p�G�q���Ʀr�򥿽T���Ʀr���۵�����m���@�˪���, bNum+1
            if (intOri[i] == intNum[j] && i != j) {
                bNum += 1;
            }
        }
    }

    // ��X�XA�XB
    printf("%dA%dB\n", aNum, bNum);
}

