#include <stdio.h>
#include <stdlib.h>

int main() {
	int one[3][3], two[3][3], three[3][3];
	int i, j;
	
	printf("請輸入第一個二維陣列\n");
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		scanf("%d",&one[i][j]);
		}
	}
    
    printf("請輸入第二個二維陣列\n");
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		scanf("%d",&two[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		three[i][j] = one[i][j] + two[i][j];
		}
	}
	
	printf("列出相加結果\n");
	for(i=0; i<3; i++){
		printf("%3d %3d %3d\n",three[i][0], three[i][1], three[i][2]);
	}
    
	system("pause");
    return 0;
}

