#include <stdio.h>
#include <stdlib.h>

void main(){
	float score;
	printf("請輸入分數：\n");
	scanf("%f",&score);
	
	if (score >= 90){
		printf("成績為 A");
	}else if(score >= 80){
		printf("成績為 B");
	}else if(score >= 70){
		printf("成績為 C");
	}else if(score >= 60){
		printf("成績為 D");
	}else{
		printf("成績為 E");
	}
}
