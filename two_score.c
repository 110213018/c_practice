#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
    int score[2][3]={{90,80,98},
					{30,60,50}};
    
    for (i=0; i<2; i++)
    	for (j=0; j<3; j++)
    		printf("�ǥ� %d ���� %d ���Ҹզ��Z�O %d\n", i+1, j+1, score[i][j]);
    return 0;
}
