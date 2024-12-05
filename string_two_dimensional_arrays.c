# include <stdlib.h>
# include <stdio.h>

void main() {
	char name[30];
	char *ptr;
	
	ptr = name;
	ptr+=2; // 移動指標，從第 n 個開始 
	printf("請輸入姓名：");
	gets(name);
	printf("Hi, %s !\n",ptr);
	system("pause");
	return 0;	
}
