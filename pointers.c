#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=20, val;
	int *ptr;                              // �����ܼ� 
	
	ptr = &i;                              // ptr ���V i �� address  ( & = �� i �� address) 
	val = *ptr;                            // val ���V ptr �� i ��   ( * = �� i �����e) 
	printf("%d %d\n",*ptr,val); 		   // 20 20
	printf("%x\t %x\t %x\n",&i,&val,&ptr); // 62fe1c   62fe18  62fe10


	system("pause");
	return 0;
}


