#include <stdio.h>
#include <stdlib.h>

void sort(int data[], int n);
void display(int data[], int n);

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(data) / sizeof(data[0]);

    printf("�Ƨǫe�G ");
    display(data, n); 		// ��X�Ƨǫe 

    sort(data, n); 			// ��w�ƧǪk 

    printf("�Ƨǫ�G ");
    display(data, n); 		// ��X�Ƨǫ� 

    return 0;
}

// ��w�ƧǪk 
void sort(int data[], int n) {
    int temp, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (data[j] < data[j + 1]) {  // �Ѥj��p�Ƨ�
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

// ��Ƨǫe��Ƨǫ᪺ data, �Ӷ��ǿ�X 
void display(int data[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%2d  ", data[i]);
    }
    printf("\n");
}

