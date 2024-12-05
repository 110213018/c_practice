#include <stdio.h>
#include <stdlib.h>
void display(int data[], int len){
	int i;
	printf("num °}¦C¦ì§} = %p\n",data);
	for (i = 0; i < len; i++){
		printf("data[%d]=%d       address=%p\n",i,data[i],&data[i]);
	}
	
}

int main(){
	int i;
	int data[] = {5, 6, 7, 8, 9};	
	int len = sizeof(data) / sizeof(data[0]);
	printf("main ¨ç¦¡¿é¥X\ndata °}¦C¦ì§} =%p\n",data);
	
	for (i = 0; i < len; i++){
		printf("data[%d]=%d       address=%p\n",i,data[i],&data[i]);
	}
	
	display(data,len);
	
	system("pause");
	return 0;
}

