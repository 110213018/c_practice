#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, k;
	int *ptr;                              // �����ܼ� 
	
	printf("%x\t %x\t %x\n",&i,&k,&ptr);
	i = 5;
	printf("����e i=%d\n",i);
	ptr = &i;                              // ptr ���V i �� address  ( & = �� i �� address) 
	printf("%d\t %x\t %x\n",*ptr,ptr,&ptr);
	k=10;
	*ptr=k;                            // val ���V ptr �� i ��   ( * = �� i �����e) 
	printf("%d\t %x\t %x\n",*ptr,ptr,&ptr); // 62fe1c   62fe18  62fe10

	printf("����� i=%d\n",i);

	system("pause");
	return 0;
}
