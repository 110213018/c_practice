#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=20, val;
	int *ptr;                              // 指標變數 
	
	ptr = &i;                              // ptr 指向 i 的 address  ( & = 取 i 的 address) 
	val = *ptr;                            // val 指向 ptr 的 i 值   ( * = 取 i 的內容) 
	printf("%d %d\n",*ptr,val); 		   // 20 20
	printf("%x\t %x\t %x\n",&i,&val,&ptr); // 62fe1c   62fe18  62fe10


	system("pause");
	return 0;
}


