#include <stdio.h>
#include <stdlib.h>

void findRow(int n, int data[]);
void findGraph(int n, int data[], int row);

int main() {
    int n, i;
    printf("�п�J�����Ϫ� x �b�Ʀr�Ӽ�: ");
    scanf("%d", &n);

    int data[n];
    printf("�п�J�b�����ϤW��ܪ��ƭ�: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    findRow(n, data);
    return 0;
}

// ��X y �b���̰��� (data ���̰��� + 2)
void findRow(int n, int data[]) {
    int row = 0, i;
    for (i = 0; i < n; i++) {
        if (data[i] > row) { // ����j�p, �̤j���ܦ� row
            row = data[i];
        }
    }
    row = row + 2;
    findGraph(n, data, row);
}

// ø�s������
void findGraph(int n, int data[], int row) {
	int r, c, i;
    for ( r = row; r > 0; r--) {
        for ( c = 0; c < n; c++) {
            if (c == 0) { // ��X y �b
                if (r / 10 < 1) {
                    printf("0%d ", r);
                } else {
                    printf("%d ", r);
                }
            }

            // ��X ## �M ..
            // �p�G data[c] < y �b����, �N��X ..; �Ϥ�, ��X ##
            if (data[c] < r) {
                printf(".. ");
            } else {
                printf("## ");
            }
        }
        printf("\n"); // �駹�@�C�N����
    }

    // ��X x �b
    for ( i = 0; i <= n; i++) {
        if (i / 10 < 1) {
            printf("0%d ", i);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
}

