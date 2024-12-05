#include <stdio.h>
#include <stdlib.h>


int main() {
    int one[5];
    int i, j, exchange;

    printf("loop  ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &one[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (one[j] > one[j + 1]) {
                exchange = one[j];
                one[j] = one[j + 1];
                one[j + 1] = exchange;
            }
        }
    }

    printf("loop  ");
    for (i = 0; i < 5; i++) {
        printf("%d ", one[i]);
    }
    printf("\n");

    return 0;
}

