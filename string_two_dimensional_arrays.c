# include <stdlib.h>
# include <stdio.h>

void main() {
	char name[30];
	char *ptr;
	
	ptr = name;
	ptr+=2; // ���ʫ��СA�q�� n �Ӷ}�l 
	printf("�п�J�m�W�G");
	gets(name);
	printf("Hi, %s !\n",ptr);
	system("pause");
	return 0;	
}
