#include <stdio.h>
#include <stdlib.h> 

void main(){
	int num[10];
	int *ptr;
	int i, count;
	
	ptr = num;
	printf("�п�J�}�C�����Ӽ�: " );
	scanf("%d", &count);
	for(i=0; i<count;i++){
		printf("�п�J�}�C�������e: " );
		scanf("%d", ptr++);
	}

	ptr = num;
	for(i=0; i<count;i++)
		printf("��X[%d] : %d\n",i ,*(ptr+i) );
		
	system("pause");
	return 0;
}
