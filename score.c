#include <stdio.h>
#include <stdlib.h>

void main(){
	float score;
	printf("�п�J���ơG\n");
	scanf("%f",&score);
	
	if (score >= 90){
		printf("���Z�� A");
	}else if(score >= 80){
		printf("���Z�� B");
	}else if(score >= 70){
		printf("���Z�� C");
	}else if(score >= 60){
		printf("���Z�� D");
	}else{
		printf("���Z�� E");
	}
}
