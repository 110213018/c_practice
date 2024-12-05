#include <stdio.h>
#include <stdlib.h>

void sort(int data[], int n);
void display(int data[], int n);

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(data) / sizeof(data[0]);

    printf("排序前： ");
    display(data, n); 		// 輸出排序前 

    sort(data, n); 			// 氣泡排序法 

    printf("排序後： ");
    display(data, n); 		// 輸出排序後 

    return 0;
}

// 氣泡排序法 
void sort(int data[], int n) {
    int temp, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (data[j] < data[j + 1]) {  // 由大到小排序
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

// 把排序前跟排序後的 data, 照順序輸出 
void display(int data[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%2d  ", data[i]);
    }
    printf("\n");
}

