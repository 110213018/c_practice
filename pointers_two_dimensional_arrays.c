#include <stdio.h>
#include <stdlib.h> 

void main(){
	int n[2][3]={{1,2,3},
				{4,5,6}};
	int rows, cols;
	int i, j;
	
	rows = sizeof(n)/sizeof(n[0]);
	cols = sizeof(n[0])/sizeof(n[0][0]);
	printf("row=%d \t cols=%d\n",rows, cols);
	printf("n[i][j]�榡���O�����}\n");
	for(i=0; i<rows; i++){
		for (j=0; j<cols; j++){
			printf("n[i][j]=%X\t",&n[i][j]);
		}
		printf("\n");
	}
	
	printf("n[i]+j�榡���O�����}\n");
	for(i=0; i<rows; i++){
		for (j=0; j<cols; j++){
			printf("n[i]+j=%X\t",n[i]+j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
