#include <stdio.h>
#include <stdlib.h>

void main(){
	float mile;
	printf("將英里轉成公里\n");
	printf("請輸入英里");
	scanf("%f",&mile);
	
	float km = mile*1.60934;
	
	printf("公里為%f \n",km);
}
