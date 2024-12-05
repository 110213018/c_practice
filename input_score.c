#include <stdio.h>
#include <stdlib.h>

int main() {
    int score, i=0;
    
    printf("輸入 0 代表輸入結束\n");

	do{
		printf("請輸入分數 ==> ");
    	scanf("%d", &score);
    	i++;
	}while(i==0 || score!=0);

    printf("\n");
    system("pause");
}

