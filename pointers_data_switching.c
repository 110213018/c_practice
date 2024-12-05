#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=10, y=20, tmp;
	int *ptrx, *ptry;                              // 指標變數 
	
	printf("%x\t %x\t %x\t %x\t %x\n",&x,&y,&tmp,&ptrx,&ptry);
	printf("資料交換前\n");
	printf("%d\t %d\t\n",x,y);
	ptrx=&x;
	ptry=&y;
	tmp=*ptrx;
	*ptrx=*ptry;
	*ptry=tmp;
	printf("資料交換後\n");
	printf("%d\t %d\t\n",x,y);

	system("pause");
	return 0;
}
