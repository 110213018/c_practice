#include <stdio.h>
#include <stdlib.h>

void main(){
	int year;
	printf("請輸入測試年分：");
	scanf("%d",&year);
	
	if (year%4 != 0){  						   // 不可被4整除者，不是閏年 
		printf("%d不是閏年",year);
	}else if(year%4 == 0 && year%100 != 0){    // 可被4整除且不為100整除者，為閏年 
		printf("%d是閏年",year);
	}else if(year%400 != 0 && year%100 == 0){  // 可被100整除且不為400整除者為平年 
		printf("%d是平年",year);
	}else{  							   	   // 可被400整除為閏年
		printf("%d是閏年",year);
	}
}
