#include <stdio.h>
#include <stdlib.h> 

void main(){
	int num[]={3,6,7,5,9};
	int *ptr;
	int i, len;
	int sum = 0;
	
	ptr = num;
	printf("num ��} = %X\n",num);
	printf("ptr ��} = %X\n",ptr);
	len = sizeof(num)/sizeof(num[0]);
	for(i=0; i<len;i++)
		sum += *ptr++;
	printf("��k 1 �}�C�`�M = %d\n",sum);
	printf("num ��} = %X\n",num);
	printf("ptr ��} = %X\n",ptr);
	ptr = num;
	for(i=0; i<len; i++)
		sum+=*(ptr+i);
	printf("��k 2 �}�C�`�M = %d\n",sum);
	printf("num ��} = %X\n",num);
	printf("ptr ��} = %X\n",ptr);
	system("pause");
	return 0;
}
