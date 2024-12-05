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
	
    printf("請輸入底數");
    scanf("%f",&one);
    
    printf("請輸入次方數");
    scanf("%d",&two);
    
    printf(" %f 的 %d 次方 = %f",one, two, mypow(one,two));
    
}
