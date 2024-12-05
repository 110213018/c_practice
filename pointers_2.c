#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, k;
	int *ptr;                              // 指標變數 
	
	printf("%x\t %x\t %x\n",&i,&k,&ptr);
	i = 5;
	printf("執行前 i=%d\n",i);
	ptr = &i;                              // ptr 指向 i 的 address  ( & = 取 i 的 address) 
	printf("%d\t %x\t %x\n",*ptr,ptr,&ptr);
	k=10;
	*ptr=k;                            // val 指向 ptr 的 i 值   ( * = 取 i 的內容) 
	printf("%d\t %x\t %x\n",*ptr,ptr,&ptr); // 62fe1c   62fe18  62fe10

	printf("執行後 i=%d\n",i);

	system("pause");
	return 0;
}
