#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, exchange;
	int one[5];
	printf("loop ");
	
	for (i=0; i<=5;i++)
		scanf("%d",&one[i]);
	
	for (i=0; i<4;i++){
		for (j=0; j<4-i; j++){
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

// �� 4 ���A�N�i�o�X���T�Ƨ� 
// 5 4 3 2 1  ������ 4
// 4 3 2 1 5  ������ 3
// 3 2 1 4 5  ������ 2
// 2 1 3 4 5  ������ 1
// 1 2 3 4 5  


