#include <stdio.h>
#include <stdlib.h>

float mypow(float one, int two){
	int i;
	float result=1.0;
	for(i=0; i<two; i++){
		result*=one;
	}
	return result;
}

int main(){
	float one;
	int two;
	
    printf("�п�J����");
    scanf("%f",&one);
    
    printf("�п�J�����");
    scanf("%d",&two);
    
    printf(" %f �� %d ���� = %f",one, two, mypow(one,two));
    
}
