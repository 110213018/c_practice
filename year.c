#include <stdio.h>
#include <stdlib.h>

void main(){
	int year;
	printf("�п�J���զ~���G");
	scanf("%d",&year);
	
	if (year%4 != 0){  						   // ���i�Q4�㰣�̡A���O�|�~ 
		printf("%d���O�|�~",year);
	}else if(year%4 == 0 && year%100 != 0){    // �i�Q4�㰣�B����100�㰣�̡A���|�~ 
		printf("%d�O�|�~",year);
	}else if(year%400 != 0 && year%100 == 0){  // �i�Q100�㰣�B����400�㰣�̬����~ 
		printf("%d�O���~",year);
	}else{  							   	   // �i�Q400�㰣���|�~
		printf("%d�O�|�~",year);
	}
}
