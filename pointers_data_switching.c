#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=10, y=20, tmp;
	int *ptrx, *ptry;                              // �����ܼ� 
	
	printf("%x\t %x\t %x\t %x\t %x\n",&x,&y,&tmp,&ptrx,&ptry);
	printf("��ƥ洫�e\n");
	printf("%d\t %d\t\n",x,y);
	ptrx=&x;
	ptry=&y;
	tmp=*ptrx;
	*ptrx=*ptry;
	*ptry=tmp;
	printf("��ƥ洫��\n");
	printf("%d\t %d\t\n",x,y);

	system("pause");
	return 0;
}
