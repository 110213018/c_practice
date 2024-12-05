#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 6;
	int *ptr;             // 指標變數 
	
	ptr = &x;             // ptr 指向 x 的 address ( & 取 address, * 取 address 下的值 ) 
	printf("%d\n",x);     // 6
	printf("%d\n",*ptr);  // 6
	printf("%d\n",ptr);   // 6487572


	system("pause");
	return 0;
}

