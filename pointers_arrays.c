#include <stdio.h>
#include <stdlib.h> 

void main(){
	int num[10];
	int *ptr;
	int i, count;
	
	ptr = num;
	printf("請輸入陣列元素個數: " );
	scanf("%d", &count);
	for(i=0; i<count;i++){
		printf("請輸入陣列元素內容: " );
		scanf("%d", ptr++);
	}

	ptr = num;
	for(i=0; i<count;i++)
		printf("輸出[%d] : %d\n",i ,*(ptr+i) );
		
	system("pause");
	return 0;
}
