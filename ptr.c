#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 6;
	int *ptr;             // �����ܼ� 
	
	ptr = &x;             // ptr ���V x �� address ( & �� address, * �� address �U���� ) 
	printf("%d\n",x);     // 6
	printf("%d\n",*ptr);  // 6
	printf("%d\n",ptr);   // 6487572


	system("pause");
	return 0;
}

